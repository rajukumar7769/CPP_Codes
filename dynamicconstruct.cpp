#include<iostream>
#include<conio.h>
using namespace std;

class dynamic
{
const char* p;
public:
// default constructor
dynamic()
{

// allocating memory at run time
p = new char[6];
p = "Raju Kumar & I am B.tech student";
}

void display()
{
cout << p << endl;
}
};

int main()
{

dynamic dy;
dy.display();

}
 