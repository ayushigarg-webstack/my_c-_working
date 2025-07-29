#include <iostream>
using namespace std;
int main()
{
    // LOGIN
    int username, password, task;
    int balance, withdraw, add;

    // cout<<"ENTER YOUR USERNAME :";
    // cin>>username;
    cout << "ENTER YOUR PASSWORD :";
    cin >> password;

    if (password == 7890)
    {

        cout << "LOGIN SUCCESSFUL!" << endl;

        balance = 20000;

        while (1 == 1)
        {

            cout << "what task you want to perform?" << endl;
            cout << "enter 1 to add cash : " << endl;
            cout << "enter 2 to check balance : " << endl;
            cout << "enter 3 to withdraw cash : " << endl;
            cout << "enter any other number to exit : " << endl;
            cin >> task;

            // add cash
            if (task == 1)
            {
                cout << "enter the amount you want to add:";
                cin >> add;
                if (add % 100 == 0)
                {
                    balance = balance + add;
                    cout << "remaining balance : " << balance << endl;
                }
                else
                {
                    cout << "you cannot add this amount" << endl;
                }
            }

            // check balance
            else if (task == 2)
                cout << "remaining balance : " << balance << endl;
            // withdraw cash
            else if (task == 3)
            {
                cout << "enter the amount you want to withdraw:";
                cin >> withdraw;
                if (withdraw <= balance)
                {
                    if (withdraw % 100 == 0)
                    {
                        balance = balance - withdraw;
                        cout << "remaining balance : " << balance << endl;
                    }
                    else
                    {
                        cout<<"you cannot withdraw this amount!"<<endl;
                    }
                }
                else
                {
                    cout << "insufficient balance!";
                }
            }
            else
            {
                cout << "EXITED";
                break;
            }
        }
    }
    else
    {
        cout << "INVALID LOGIN!" << endl;
    }
}