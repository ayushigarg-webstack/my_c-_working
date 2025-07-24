#include<iostream>
using namespace std;
class employee
{
    private:
    int salary;
    public:
    employee(int s)
    {
        salary=s;
    }
    friend void displaysalary(employee data);
};
void displaysalary(employee data)
{
    cout<<"salary : "<<data.salary;
}
int main()
{
    employee data(400000);
    displaysalary(data);

}