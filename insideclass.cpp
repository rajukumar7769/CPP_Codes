#include<iostream>
#include<conio.h>
using namespace std;

class student
{
	int s_no;
	char s_name[10];
	public:
		void accept()
		
		{
			cout<<"Enter s_no : ";
			cin>>s_no;
			
			cout<<"Enter s_name : ";
			cin>>s_name;
			
		}
		void display()
		{
			cout<<"s_no : "<<s_no <<"\n";
			cout<<"s_name : "<<s_name <<"\n";
		}
};

int main()
{
	
	student s;
	
	s.accept();
	cout<<"\n :------Student Detail------: \n";
	s.display();
	
	getch();
}
