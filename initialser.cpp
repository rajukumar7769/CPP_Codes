#include <iostream>
using namespace std;
 
class A {
   int i;
   public:
   A(int );
};
  
A::A(int val) {
   i = val;
   cout << "Constructor ::A ; i = " << i << endl;
}
  
class B {
   A a;
   public:
   B(int );
};
B::B(int val):a(val) {
   cout << "Constructor :: B";
}
  
int main() {
   B obj(10);
   return 0;
}