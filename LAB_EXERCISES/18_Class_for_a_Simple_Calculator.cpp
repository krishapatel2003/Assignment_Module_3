//Class for a Simple Calculator
#include<iostream>
using namespace std;

class Calculator 
{
	public:
    	double add(double a,double b) 
		{
    		return a+b;
    	}

    double subtract(double a,double b) 
	{
        return a-b;
    }

    double multiply(double a,double b) 
	{
        return a*b;
    }

    double divide(double a,double b) 
	{
        if (b==0)  
		{
            cout<<"Error! Division by zero."<<endl;
            return 0;
        }
		else 
		{
            return a/b;
        }
    }
};

int main() 
{
    Calculator calc;

    double num1,num2;
    int choice;

    cout<<"\n***************Simple Calculator****************";
    cout<<"\n\n";
    cout<<"\n Choose an operation:";
    cout<<"\n 1. Add";
    cout<<"\n 2. Subtract";
    cout<<"\n 3. Multiply";
    cout<<"\n 4. Divide";
    cout<<"\n\n";
    cout<<"**************************************************\n";

    cout<<"Enter choice (1-4): ";
    cin>>choice;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    switch(choice) 
	{
        case 1:
            cout<<"\n Result: "<<calc.add(num1, num2);
            break;
        case 2:
            cout<<"\n Result: "<<calc.subtract(num1, num2);
            break;
        case 3:
            cout<<"\n Result: "<<calc.multiply(num1, num2);
            break;
        case 4:
            cout<<"\n Result: "<<calc.divide(num1, num2);
            break;
        default:
            cout<<"\n Invalid choice!";
    }
}
