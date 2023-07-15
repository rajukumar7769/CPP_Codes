#include<iostream>
using namespace std;

class car{
    public :
    int speed(int maxspeed);

};

int car::speed(int maxspeed) {
    return maxspeed;
}

int main(){
    car myobj;
    cout<<myobj.speed(489);

    return 0;
}