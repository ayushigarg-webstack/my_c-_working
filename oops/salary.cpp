#include<iostream>
using namespace std;
class employee
{
    private:
    float salary;

    public:
    void setSalary(float s)
    {
        salary=s;
    }
    float getsalary()
    {
        return salary;
    }
};
int main()
{
    float salary;
    employee data;
    data.setSalary(100000);
    salary=data.getsalary();
    cout<<"employee's salary is : "<<salary;
}