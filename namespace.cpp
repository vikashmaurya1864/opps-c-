#include <iostream>
using namespace std;

namespace first {
   void func(int a , int b) {
      cout << "addition of number " << a+b<<endl;
   }
}

namespace second {
   void func( int x, int y) {
      cout << "substraction on two number " << x-y<<endl;
   }
}
namespace third{
    void fun(int p,int q){
        cout<<"product of "<<p*q<<endl;
    }
}

int main () {
   first::func(5,6);
   second::func(9,7); 
   third::fun(4,5);
   return 0;
}