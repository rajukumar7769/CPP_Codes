#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	int s_no;
	char s_name[10];
	public:
		void accept();
		void display()
		{
			cout<<"\n s_no : "<<s_no;
			cout<<"\n s_name : "<<s_name;
		}
};

void student :: accept()
{
	cout<<"Enter s_no : ";
			cin>>s_no;
			
			cout<<"Enter s_name : ";
			cin>>s_name;
}
int main()
{
	
	student s;
	
	s.accept();
	cout <<":---------Student Detail --------:";
	s.display();
	
	getch();
}