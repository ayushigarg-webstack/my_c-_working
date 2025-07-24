#include<iostream>
using namespace std;
class account
{
    public:
    int account;
    float balance;
    void accountdetails()
    {
        cout<<"Account number : "<<account<<endl;
        cout<<"balance : "<<balance<<endl;
    }
    
};
class savingsAccount : public account
{
    public:
    float interest;
    
    void savingsdetails()
    {
        accountdetails();
        cout<<"interest rate :"<<interest<<"%"<<endl;
    }
};
class FixedDepositAccount :public savingsAccount
{ 
    public:
    int years;
    void fixedaccountdetails()
    {
        savingsdetails();
        cout<<"duration of fd :"<<years<<endl;
         float maturityAmount = balance + (balance * interest * years) / 100;
        cout << "Maturity Amount after " << years << " years: " << maturityAmount << endl;
    }
          
    
};

int main() {
    FixedDepositAccount fd;
    fd.account = 123456;
    fd.balance = 50000;
    fd.interest = 7;
    fd.years = 5;

    cout << "Fixed Deposit Account Details:" << endl;
    fd.fixedaccountdetails();

}
