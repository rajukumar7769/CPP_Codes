#include <iostream>
#include <cstring>

using namespace std;

struct student
{
  int roll_no;
  string name;
  
};

int main(){

	struct student stud[5];
  	int i;

	for(i=0; i<3; i++){                   		//taking values from user
		cout << "Student " << i + 1 << endl;
		cout << "Enter roll no" << endl;
		cin >> stud[i].roll_no;
		cout << "Enter name" << endl;
		cin >> stud[i].name;
	
	}
	cout<<"..... Students ....Details....."<<"\n";

	for(i=0; i<3; i++){							//printing values
		cout << "Student " << i + 1 << endl;
		cout << "Roll no : " << stud[i].roll_no << endl;
		cout << "Name : " << stud[i].name << endl;
		
	}
	return 0;
}