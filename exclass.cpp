#include<iostream>

using namespace std;

class Myclass{
    public:
    void mymethod();
};

void Myclass :: mymethod(){
    cout << "I am Iron Man";

}

int main(){
    Myclass myobj;
    myobj.mymethod();

    return 0;
}