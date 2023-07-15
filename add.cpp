#include <iostream>
#include<conio.h>
using namespace std;
int main() {
 int a,b,sum,sub,multi,mod;
 float div;
   cout << "Enter a: ";
  cin >>a;
  cout << "Enter b: ";
  cin >>b;


  sum = a+b;
  cout << a << " + " << b << " = " << sum <<"\n";
  sub = a-b;
  cout << a << " - " << b << " = " << sub <<"\n";
  multi = a*b;
  cout << a << " * " << b << " = " << multi <<"\n";
  div = (float)a/(float)b;
   cout << a << " / " << b << " = " << div <<"\n";
  mod = a%b;
   cout << a << " % " << b << " = " << mod <<"\n";  
   
 getch();
}  
