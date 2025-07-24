#include<iostream>
using namespace std;
class dim1
{
    public:
    int length;
};
class dim2
{
    public:
    int breadth;
};
class perimeter: public dim1,public dim2
{
    public:
    void calculate(int length, int breadth)
    { 
    int p=2*(length+breadth);
    cout<<"perimeter is : "<<p;
    }
};
int main()
{
    perimeter dimensions;
    cout<<"enter length : ";
    cin>>dimensions.length;
    cout<<"enter breadth : ";
    cin>>dimensions.breadth;
    dimensions.calculate(dimensions.length,dimensions.breadth);

}