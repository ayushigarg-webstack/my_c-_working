#include<iostream>
using namespace std;
class vehicle
{
    public:
    void fun()
    {
    cout<<"i have a sportscar";
    }
};

class car:public vehicle
{
};

class sportscar:public car
{
};

int main()
{
    sportscar porsche;
    porsche.fun();
}