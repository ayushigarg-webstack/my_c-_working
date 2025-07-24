#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    string name;
    int age;
    int contact;
};
int main()
{
    student student1,student2;
    cout<<"enter student 1 name : ";
    getline(cin,student1.name);
    cout<<"enter age : ";
    cin>>student1.age;
    cout<<"enter their contact no. : ";
    cin>>student1.contact;

    cout<<"enter student 2 name : ";
    cin>>student2.name;
    cout<<"enter age : ";
    cin>>student2.age;
    cout<<"enter their contact no. : ";
    cin>>student2.contact;

    cout<<"student 1 name : "<<\n\n\nstudent1.name<<endl;
    cout<<"age : "<<student1.age<<endl;
    cout<<"their contact no. : "<<student1.contact<<endl;


     cout<<"student 2 name : "<<student2.name<<endl;
    cout<<"age : "<<student2.age<<endl;
    cout<<"their contact no. : "<<student2.contact<<endl;
}