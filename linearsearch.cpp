#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, num;
    int flag=-1;
    cout<<"Enter 10 Numbers: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<=10; i++)
    {
        if(arr[i]==num)
        {
            flag = i;
            break;
        }
    }
    if(flag ==-1)
    {
    	cout<<"Element not found";
	}else
	{
		cout<<"\nFound at Index No."<<flag;
	}
    
    cout<<endl;
    return 0;
}