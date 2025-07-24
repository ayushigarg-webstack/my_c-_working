#include<iostream>
#include<string>
using namespace std;
class vehicle
{  
    public:  
    string vehicles;
    int speed;
    int capacity;
};
class car :public vehicle
{
    public:
    string name;
    int doors;
};
class electriccar:public car
{
    public:
    int batterylife;
};
int main()
{
    electriccar component;
    component.vehicles="car";
    component.name="KIA";
    component.speed=200;
    component.capacity=5;
    component.doors=4;
    component.batterylife=3;
    cout<<"my vehicle is : "<< component.vehicles<<endl;
    cout<<"its speed is : "<< component.speed<<endl;
    cout<<"its capacity is : "<< component.capacity<<endl;
    cout<<"its name is : "<< component.name<<endl;    
    cout<<"no. of doors : "<< component.doors<<endl;
    cout<<"its battery life is : "<< component.batterylife<<" hours"<<endl;

}