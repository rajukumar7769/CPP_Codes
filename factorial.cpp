#include <iostream>
using namespace std;
int main()
{
    int number, factorial = 1;
    cout << "Enter a number :" << endl;
    cin >> number;
    while(number > 1)
    {
        factorial *= number;
        number --;
    }
    cout << "Factorial : " << factorial << endl;
    return 0;
}
