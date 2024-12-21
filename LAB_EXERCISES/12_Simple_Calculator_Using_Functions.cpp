//Simple Calculator Using Functions
#include<iostream>
#include<stdexcept>  

using namespace std;
double add(double a, double b) 
{
    return a+b;
}

double subtract(double a, double b) 
{
    return a-b;
}

double multiply(double a, double b) 
{
    return a*b;
}

double divide(double a, double b) 
{
    if(b==0) 
	{
        throw invalid_argument("\n Error: Division by zero is not allowed.");
    }
    return a/b;
}

int main() 
{
    double num1, num2;
    char operation;

    cout<<"\n Enter first number: ";
    cin>>num1;
    
    cout<<" Enter an operation (+, -, *, /): ";
    cin>>operation;

    cout<<"Enter second number: ";
    cin>>num2;

    try 
	{
        switch(operation)
		{
            case '+':
                cout<<"\n Result: "<<add(num1, num2);
                break;
            case '-':
                cout<<"\n Result: "<<subtract(num1, num2);
                break;
            case '*':
                cout<<"\n Result: "<<multiply(num1, num2);
                break;
            case '/':
                cout<<"\n Result: "<<divide(num1, num2);
                break;
            default:
                cout<<"\n Invalid operation!";
                break;
        }
    } 
	catch (const exception& e) 
	{
		cout<<"\n";
        cout<<e.what(); 
    }
    return 0;
}

