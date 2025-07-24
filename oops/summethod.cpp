#include <iostream>
using namespace std;
class maths
{
public:
    void sum();
};

void maths::sum()
{
    int a;
    int b;
    cout << "enter a and b: ";
    cin >> a;
    cin >> b;
    int sum = a + b;
    cout << "\nsum is : " << sum;
}

int main()
{
    maths operation;
    operation.sum();
}