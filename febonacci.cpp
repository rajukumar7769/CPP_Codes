    #include<iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;
    int b = 1;
    int c;
    int fib = 0;
    cout << "How many fibonacci numbers do you want to print ?, enter value for n\n";
    cin >> n;
    cout << "0 1 ";
    do
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        n--;
    } while (n > 2);
    return 0;
}
    
    


 
