#include<iostream>
#include<string>
using namespace std;
int main()
{ int balance;
        cout << "Enter Initial Balance: ";
        cin >> balance;
        while (1 == 1)
        {
            if (balance >= 1000)
                break;
            else
            {
                cout << "(It must be atleast 1000 rs.)";
                cout << "Enter Initial Balance: ";
                cin >> balance;
            }

        }
    }