#include  <iostream>



int main(int ac , char *av[])
{

    if(ac!=1)
    {
        int  i ;
        int j ; 
        i = 1 ; 
        j = 0 ;
        while(i<ac)
        {
             j = 0 ;

          while(av[i][j])
          {
            std :: cout <<(char)toupper(av[i][j]);
            j++ ;
          }
          i++ ;
          std ::cout <<" " ;
        }
    }
    else 
        std :: cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;

        std :: cout <<"\n" ;
         
}