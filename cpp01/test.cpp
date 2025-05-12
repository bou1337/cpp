

#include <iostream>



 class c 
 {
    public :
    int a ;
 } ;
 int main()
 {
    c obj1 ;
    obj1.a =100 ;
    
    std ::cout <<obj1.a<<"\n" ;
    c obj2(obj1) ;
    std :: cout <<obj2.a<<"\n" ;
    std :: cout <<&obj1<<"\n"<<&obj2<<"\n" ;

 }