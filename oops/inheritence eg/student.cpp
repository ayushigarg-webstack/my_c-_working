#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int age;
};
class student : public person
{
    public:
    int rollno;
};
class collegestudent : public student
{
    public:
    string course;
    string college;
};
int main()
{
    collegestudent details;
    cout<<"name of the person :";
    cin>>details.name;
    cout<<"age of the person :";
    cin>>details.age;
    cout<<"roll no. : ";
    cin>>details.rollno;
    cout<<"course : ";
    cin>>details.course;
    cout<<"college : ";
    cin>>details.college;

}