#include<iostream>
using namespace std;
class dog
{
    public:
    void bark()
    {
        cout<<"\"woof!\"";
    }
};
int main()
{
    dog d1;
    d1.bark();
}