//Variable Scope
#include<iostream>
using namespace std;

int globalVar=100;
void localVariableExample() 
{
    int localVar=50;  
    cout<<"\n Inside localVariableExample function:"; 
    cout<<"\n Local variable: "<<localVar;  
    cout<<"\n Global variable: "<<globalVar;
}

void globalVariableExample() 
{
    cout<<"Inside globalVariableExample function:";
    cout<<"Global variable: "<<globalVar;
}

int main() 
{
    cout<<"In main function:";
    int mainLocalVar=10;
    cout<<"\n Local variable in main function: "<<mainLocalVar;
    
    localVariableExample();
    globalVariableExample();

    return 0;
}
