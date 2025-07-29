#include <iostream>
using namespace std;
class question
{
    public:
    string q1 = "Q1: What is the capital of India?";
    string option1[4] = {"a) Mumbai", "b) Delhi", "c) Kolkata", "d) Chennai"};
    string q2 = "Q2: Who invented C++?";
    string option2[4] = {"a) Bjarne Stroustrup","b) James Gosling","c) Dennis Ritchie","d) Guido van Rossum"};
    char correctoption;
    
    void displayquestion1()
    {
        cout<<q1<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<option1[i]<<endl;
        }
        correctoption='b';

    }
    void displayquestion2()
{ 

        cout<<q2<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<option2[i]<<endl;
        }
        correctoption='a';

    }
};
class quiz:public question
{
    public:
    int marks=0;
    void result()
    {
        
        marks++;

        
    }
    
    void checkanswer(char answer)
    { 

    if(answer==correctoption)
    {
        cout<<"correct answer!"<<endl;
        result();
    }
    else
    {
        cout<<"wrong answer!"<<endl<<"correct answer : "<<correctoption<<endl;
    }
    
} 


    
    
};
int main()
{
    cout << "WELCOME TO THE QUIZ!" << endl;
    cout<<"------------------------\n"<<endl;
    quiz q;
    q.displayquestion1();
    char answer;
    cout<<"enter answer : ";
    cin>>answer;
    q.checkanswer(answer);
cout<<endl<<endl;
    q.displayquestion2();
    
    cout<<"enter answer : ";
    cin>>answer;
    q.checkanswer(answer);
cout<<"your marks : "<<q.marks<<"/2";
}