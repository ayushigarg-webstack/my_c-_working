#include<iostream>
#include<string>
using namespace std;
class person
{
    public:
    string name="AYUSHI";
    int age=18;
};
class student:virtual public person
{
    public:
    int rollno=1024030686;
};
class marks: virtual public student
{
    public:

        int hindi=90;
        int eng=89;
        int maths=95;
        int science=95;
};
class sports:virtual public student
{
    public:
    string grade="A";
    int x=90;

};
class result:public sports, public marks
{
    public:

    void percentage(float total)
    {
        float percentage=(total/400)*100;
        cout<<"percentage : "<<percentage<<endl;

        

    }
};
int main()
{
    person p;
    result st;
    cout<<"name : "<<st.name<<endl;
    cout<<"age : "<<st.age<<endl;
    cout<<"roll no : "<<st.rollno<<endl;
    float total= (st.eng + st.hindi + st.maths + st.science);
    cout<<"total marks : "<<total<<endl;
    st.percentage(total);
    cout<<"grade in sports : ";
    cout<<st.x;
    
    
}