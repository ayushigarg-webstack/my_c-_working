#include<iostream>
using namespace std;
class shape
{
    public:
    void area()
    {
        cout<<"every closed shape has an area"<<endl;
    }
};
class triangle : public shape
{
    public:
    void area()
    {
        cout<<"area of triangle is (1/2)*base*height"<<endl;
    }
};
class square : public shape
{
    public:
    void area()
    {
        cout<<"area of square is side*side"<<endl;
    }
};
class rectangle : public shape
{
    public:
    void area()
    {
        cout<<"area of rectangle is length*breadth"<<endl;
    }
};
class circle : public shape
{
    public:
    void area()
    {
        cout<<"area of circle is pi*radius*radius"<<endl;
    }
};
int main()
{
    shape s;
    s.area();
    rectangle r;
    r.area();
    circle c;
    c.area();
    square sq;
    sq.area();
    

}