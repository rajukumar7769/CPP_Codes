#include <iostream>
#include <conio.h>
using namespace std;
class Time
{
	int hrs,min;
	public:
		Time(int ,int);   
		operator int();   
		~Time()          
		{
			cout<<"Destructor called...\n"<<endl;
		}
};

Time::Time(int a,int b)
{
	cout<<"Constructor called with two parameters...\n"<<endl;
	hrs=a;
	min=b;
}

Time :: operator int()
{
	cout<<"Class Type to Basic Type Conversion...\n"<<endl;
	return(hrs*60+min);
}

int main()
{

	int h,m,duration;
	cout<<"Enter Hours : ";
        cin>>h;
	cout<<"Enter Minutes : ";
        cin>>m;
	Time t(h,m);       
	duration = t;      
	cout<<"Total Minutes are : "<<duration <<"\n";
	cout<<"\n 2nd method operator overloading \n"<<endl;
	duration = t.operator int();
	cout<<"Total Minutes are "<<duration <<"\n";
	
        getch();
}