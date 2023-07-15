#include <iostream>
#include<string>

using namespace std;

void search(char *pat,char *txt)
{
	int m=strlen(pat);
	int n=strlen(txt);
	
	for(int i=0;i<=n-m;i++)
	{
		int j;
		for(j=0;j<m;j++)
		{
			if(txt[i+j] !=pat[j])
			break;
		}
		if(j==m)
		{
			cout<<"\npattern found at index "<<i<<"\n";
		}
	}
}
int main()
{
	char *txt="aabababbabababaabbaabaa";
	char *pat="aab";
	cout<<"String text: "<<txt<<"\n";
	cout<<"string pattern: "<<pat;
	search(pat,txt);
	return 0;
}