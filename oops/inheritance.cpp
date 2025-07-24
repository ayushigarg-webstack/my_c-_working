#include<iostream>
using namespace std;
class school
{
    public:
    
    void count(int students)
    {
        cout<<"total no. of students in school are : "<<students;
    }

};
class student:public school
{
    public:
    int students=100;

};
int main()
{
    student people;
    people.count(people.students);      
}