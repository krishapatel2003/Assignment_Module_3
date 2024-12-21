//Class for Bank Account
#include<iostream>
using namespace std;

class BankAccount 
{
	private:
    	double balance;  
	public:
    	BankAccount(double initial_balance=0) 
		{
        	balance=initial_balance;
   		}

    void deposit(double amount) 
	{
        if(amount>0) 
		{
            balance+=amount;
            cout<<"\n Deposited: $"<<amount<<". New balance: $"<<balance;
        }
		else 
		{
            cout<<"\n Deposit amount must be positive.";
        }
    }

    void withdraw(double amount) 
	{
        if(amount>0) 
		{
            if(balance>=amount) 
			{
                balance-=amount;
                cout<<"\n Withdrew: $"<<amount<<". New balance: $"<<balance;
            } 
			else 
			{
                cout<<"\n Insufficient balance!";
            }
        } 
		else 
		{
            cout<<"\n Withdrawal amount must be positive.";
        }
    }

    double getBalance() const 
	{
        return balance;
    }
};

int main() 
{
    BankAccount account(100);

    account.deposit(50);

    account.withdraw(30);

    cout<<"\n Final Balance: $"<<account.getBalance();

}
