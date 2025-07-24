#include<iostream>
using namespace std;
class bankaccount
{
    public:
    int accountnumber;
    string name;
    float balance=0;
    int deposit=0;
    int withdraw;
    void createaccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountnumber;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
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
        cout<<"ACCOUNT CREATED SUCCESSFULLY!\n";
    }
    void depositmoney()
    {
        cout << "Enter Account Number: ";
        cin >> accountnumber;
        cout<<"Enter the amount you want to deposit : ";
        cin>>deposit;
        if (deposit > 0)
        {
            balance += deposit;
            cout << "Amount deposited successfully."<<endl;
        }
        else
            cout << "Invalid amount."<<endl;
    }
    void withdrawmoney()
    {
        cout << "Enter Account Number: ";
        cin >> accountnumber;
        cout<<"Enter the amount you want to withdraw : ";
        cin>>withdraw;
        if (withdraw > 0 && withdraw <= balance) {
            balance =balance-withdraw;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
        balance=balance-withdraw;

    }
    void displayaccount()
    {
        cout<<"account not created, create an account: "<<endl;
        createaccount();
        cout<<"account number : "<<accountnumber<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"balance : "<<balance<<endl;
    }
};

int main()
{
    bankaccount acc;
   cout<<"------ BANK SYSTEM ------"<<endl;
   cout<<"1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. Show Account Details\n5. Exit\n";
   while(1==1)
   {
    int choice;
    cout<<"Enter your choice: _";
    cin>>choice;
    if(choice==1)
    {
        acc.createaccount();
    }  
    else if(choice==2)
    {
        acc.depositmoney();
    } 
    else if(choice==3)
    {
        acc.withdrawmoney();
    }
    else if(choice==4)
    {
        acc.displayaccount();
    }
    else if(choice==5)
    {
        cout<<"EXITED!";
        break;
    }
   } 


}