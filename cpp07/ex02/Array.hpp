
#ifndef  ARRAY_H 
#define ARRAY_H
template <typename  T> 

class Array 
{   private :
    T *data ; 
    unsigned int size ;
    public :
   Array(): data(nullptr),size(0)
   {
        std::cout<<"Default constructor called\n"  ; 
   }
   Array(unsigned  int n):data(nullptr) , size(n)
   {    if(n>0)
        data  =  new T[n]();
        std:: cout<<"constructor called\n" ;

   } 
   Array(Array &obj): data(nullptr) , size(obj.size) 
   {   if(obj.size>0)
        data  = new T[obj.size]() ; 
        if(data)
        {
            for(unsigned i=0 ; i<size ;i++)
            {
                data[i] = obj.data[i] ;
            }
            size =  obj.size ;
        }
        std::cout<<"Copy constructor called\n" ; 
    }  
   Array& operator =(Array &obj)
   {    if(obj!=*this)
        {
            delete[] data ;
            size = obj.size ; 
            if(size>0)
            {
                data = new T[size]() ;
                
                for(unsigned int i = 0 ; i<size ; i++)
                {
                    data[i]  = obj.data[i] ;
                }
            }

        }
        std::cout<<"Assignment  operator called\n" ;
        return *this ; 
   } 
   T  &operator[](unsigned int & index)
   {   
        if(index>=size)
        throw "index is out of bound\n" ;
        return data[index] ;
   }
   unsigned int size_fnc()
   {
    return  size ; 
   }
   ~Array()
   {    
        delete [] data ;
        std::cout<<"Destructor called\n" ;
   }
} ;
#endif