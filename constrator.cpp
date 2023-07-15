#include<iostream>
#include<conio.h>
using namespace std;

class student
{
	int rno;
	char name[20];
	public:
		student()
		{
			cout<<"\n Enter rno : ";
			cin>>rno;
			
			cout<<"\n Enter Name : ";
			cin>>name;
		}
		void display();
};
void student::display()
{
	cout<<"\n Roll No is : "<<rno;
	cout<<"\n Name is : "<<name;
}
int main()
{  
	student s;
	 cout<<"\n :------Student Detail------: \n ";
	s.display();
	getch();
}