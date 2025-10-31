

#include "BitcoinExchange.hpp"


int  check_input_file(char *av[],float *value ,std::map<std::string , float> &data )
{   
    std::ifstream f(av[1]) ;
    if(!f.is_open())
        return  1 ;
    std:: string line  ; 
    std::getline(f, line) ;
    if(valid_first_line(line)|| line.empty())
        return  1  ;
    while(std::getline(f,line))
    {  
        if(valid_format(line , value)==0)
        {   
            if(!valid_date(line) )
            {

                //std::<<2011-01-03 => 3 = 0.9                
                std::cout<<line.substr(0,10)<<" => "<<*value<<" = "<<(*value)*find_exchange(line.substr(0,10),data)<<"\n" ;
            }
       
        }
    }
    return 0 ;
}



int valid_format(std:: string s , float *result)
{
    // year-day-mont | value ;
    if(s.size()<14)
    {
        std::cerr<<"Error: bad input"<<" => "<<s<<"\n" ;
        return 1 ; 
    }
    int  stop ;
    int  i = 0 ;
    while(i<4)
    {
        if(!isdigit(s[i]))
            return 1 ;
        i++ ;
    }
    
    if(s[i]!='-')
        return 1 ;
    
    stop =++i ; 
    while(i<stop+2)
    {   
        if(!isdigit(s[i]))
            return 1 ;
        i++ ;
    }
   
    if(s[i]!='-')
        return 1 ;
   
    stop =++i ; 
    while(i<stop+2)
    {
        if(!isdigit(s[i]))
            return 1 ;
        i++ ;
    }
    if(s[i]!=' '|| s[++i]!='|'||s[++i]!=' ' )
    {
        std::cerr<<"Error: bad input"<<" => "<<s.substr(0,10)<<"\n" ;
    }
    i++ ;
    if(valid_value(s,i,result))
        return  1 ;
    
    return 0 ;
}

int valid_value(std:: string s , int i ,float *rsl)
{  
    int goma  =0 ; 
    float result = 0  ; 
    size_t j = i ;
    int div =10 ;
   
    while(j<s.size())
    {   
        if(s[j]=='.')
        {
            j++ ;
            goma++ ; 
            if(goma==2)
            {   
                std::cerr<<"Error: More than one goma in you value\n" ;
                return 1 ;
            }
            if(j==s.size())
            {
                std::cerr<<"Error: goma can't be last element\n" ;
                return  1 ;
            }


        }
        if(!isdigit(s[j]))
        {   
            std::cerr<<"Error: not a positive number.\n" ;
            return 1 ;
        }
        if(goma==0)
        {
            result =result *10 +(s[j]-'0') ;
            if(result>1000)
            {
                std::cerr<<"Error: too large a number.\n" ;
                return 1 ;
            }
            
        }
        if (goma==1)
        {   
            
            result +=(float)(s[j]-'0')/div ;
            div=div*10 ;
        }
        j++ ;    ; 
    }
    *rsl = result ;
    return  0 ; 
}

int valid_first_line(std::string line)
{
    //date | value 
    if(line.substr(0,4)!="date")
        return  1 ;
    if(line[4]!=' '|| line[5]!='|' || line[6]!=' ')
        return 1;
    if(line.substr(7,line.size())!="value") 
        return 1 ; 
    return 0 ;
}


int valid_date(std::string s)
{
    int year =std::atoi(s.substr(0,4).c_str()) ; 
    int month = std::atoi(s.substr(5,7).c_str()) ;
    int day = std::atoi(s.substr(8,10).c_str()) ;
    if(year>2025||year<2009)
    {   std::cerr<<"Error: year must be between 2009 and 2025\n" ;
        return 1 ;
    }
    if(month<1|| month>12)
    {   std::cerr<<"Error: month  must be between 1 && 12\n" ;
        return 1 ;
    }
     int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (isLeapYear(year)) daysInMonth[2] = 29;
    if( day > daysInMonth[month]|| day<1)
    {
        std::cerr<<"Error: day in month "<<month <<" can't be "<<day<<"\n" ;
        return 1 ;
    } 
    return 0 ;
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int data(std::map<std::string ,float> &data)
{   
    std:: string date ;
    float exchange_rate ;
    std::ifstream f("data.csv") ;
    std::string line ; 
    std::getline(f,line) ;
    while(std::getline(f ,line))
    {   
        date = line.substr(0,10) ;
        exchange_rate =std::atof(line.substr(11,line.size()).c_str()) ;
        data[date] = exchange_rate ;
    }
    return 0 ;
}
float find_exchange(const std::string& date, std::map<std::string, float>& map)
{
    std::map<std::string, float>::iterator it = map.lower_bound(date);

    if (it == map.end())
    {
        
        --it;
        return it->second;
    }

    if (it->first == date)
    {
        
        return it->second;
    }

    if (it == map.begin())
    {
        
        return -1.0f;
    }
    --it;
    return it->second;
}
