#include<iostream>
#include<string>

using namespace std;

class car {
    public:
string brandname;
string modal;
string engine;
string colour;
int cost;

};
int main(){

car obj1;
obj1.brandname="BMW";
obj1.modal="mustang";
obj1.engine = " v8";
obj1.colour = "blue";
obj1.cost = 1500000;

car obj2;
obj2.brandname="Farriri";
obj2.modal="alpha beast";
obj2.engine = " s9";
obj2.colour = "yellow";
obj2.cost = 3000000;

cout << "First Car"<<"\n";

cout<<"Brand Name :"<<obj1.brandname<<endl;
cout<<"Engine : "<<obj1.engine<<endl;
cout<<"colour : "<<obj1.colour<<endl;
cout<<"Cost : "<<obj1.cost<<endl;
cout<<"Modal : "<<obj1.modal<<endl;

cout << "Second Car"<<"\n";

cout<<"Brand Name : "<<obj2.brandname<<endl;
cout<<"Engine :"<<obj2.engine<<endl;
cout<<"colour :"<<obj2.colour<<endl;
cout<<"Cost :"<<obj2.cost<<endl;
cout<<"Modal :"<<obj2.modal<<endl;

return 0;

}
