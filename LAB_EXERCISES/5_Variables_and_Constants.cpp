//Variables and Constants
#include <iostream>
using namespace std;

int main() 
{
    const double PI=3.14159; 
	const int DAYS_IN_WEEK=7; 
    
    int num1=10; 
    double num2=20.5; 
    char grade='A'; 
    bool isAdult=true; 
    
    int sum=num1+5; 
    double product=num2*PI; 
    char nextGrade=grade+1; 
    
    cout<<"Value of num1 (int): "<<num1<<endl;
    cout<<"Value of num2 (double): "<<num2<<endl;
    cout<<"Value of grade (char): "<<grade<<endl;
    cout<<"Is Adult (bool): "<<(isAdult ? "Yes" : "No")<<endl;
    
    cout<<"Sum of num1 and 5: "<<sum<<endl;
    cout<<"Product of num2 and PI: "<<product<<endl;
    cout<<"Next grade after "<<grade<<": "<<nextGrade<<endl;
    
    cout<<"Constant value of PI: "<<PI<<endl;
    cout<<"Constant value of days in a week: "<<DAYS_IN_WEEK<<endl;
    
    return 0;
}
