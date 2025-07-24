#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int standard;
    int roll_no;
    student(string a, int b, int c)
    {
        name=a;
        standard=b;
        roll_no=c;
    }

};
int main()
{
    student student1("AYUSHI",12,120305);
    student student2("HARSHITA",10,100120);

    cout<<"student1 name:"<<student1.name<<endl;
    cout<<"student1 roll no.:"<<student1.roll_no<<endl;
    cout<<"student1 standard:"<<student1.standard<<endl<<endl;

    cout<<"student2 name:"<<student2.name<<endl;
    cout<<"student2 roll no.:"<<student2.roll_no<<endl;
    cout<<"student2 standard:"<<student2.standard<<endl;
}