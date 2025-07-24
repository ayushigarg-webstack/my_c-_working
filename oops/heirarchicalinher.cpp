#include<iostream>
using namespace std;
class marks
{
    public:

        int hindi=90;
        int eng=89;
        int maths=95;
        int science=95;
};
class sports
{
    public:
    string grade="A";

};
class result:public marks,sports
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
    result st;
    float total= (st.eng + st.hindi + st.maths + st.science);
    cout<<"total marks : "<<total<<endl;
    st.percentage(total);
    cout<<"grade in sports : "<<endl;
    cout<<st.grade;        
} 
