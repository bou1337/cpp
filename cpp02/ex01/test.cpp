#include <iostream>

struct X {
  int data;
  X& operator=(X& a) { return a; }
  X& operator=(int a) {
    data = a;
    std ::cout <<this<<"\n" ;
    return *this;
  }
};

int main() {
  X x1, x2;
  std ::cout <<&x1<<"\n" ;
  x1 = x2 ;
       // call x1.operator=(x2)
  x1 = 5;       // call x1.operator=(5)
}