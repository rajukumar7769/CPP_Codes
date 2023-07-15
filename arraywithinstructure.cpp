#include<iostream>
#include<string.h>
using namespace std;
struct lengthstring
{
	char str[4];
};
int main()
{
	lengthstring s;
int len,i;
char str;
for(i=0;i<4;i++)
{
cout<<"please enter string"<<endl;
cin>>s.str;
len=strlen(s.str);
cout<<"The length of string is="<<len<<endl;
}
return 0;
}