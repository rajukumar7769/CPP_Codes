#include <iostream>
using namespace std;
int main()
{
    float percent;
    cout<<"Enter your percentage: ";
    cin>>percent;
    cout<<"You scored "<<percent<<"%"<<endl;
    if (percent>=40)
    {
        cout<<"Congratulation: You have passed";
    }
    return 0;
}
