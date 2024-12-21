//Factorial Calculation Using Recursion
#include<iostream>
using namespace std;

long long factorial(int n) 
{
    if(n==0||n==1) 
	{
        return 1;
    }
    return n*factorial(n-1);
}

int main() 
{
    int num;
    
    cout<<"Enter a positive integer: ";
    cin>>num;

    if(num<0)
	{
        cout<<"\n Factorial is not defined for negative numbers.";
    }
	else
	{
        long long result=factorial(num);
        cout<<"\n Factorial of "<<num<<" is: "<<result;
    }
    return 0;
}
