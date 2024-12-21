//Grade Calculator
#include <iostream>
using namespace std;

int main() 
{
    float marks;

    cout<<"\n Enter the student's marks: ";
    cin>>marks;

    if(marks>=90) 
	{
        cout<<"\n Grade: A";
    }
    else if(marks>=80) 
	{
        cout<<"\n Grade: B";
    }
    else if(marks>=70) 
	{
        cout<<"\n Grade: C";
    }
    else if(marks>=60) 
	{
        cout<<"\n Grade: D";
    }
    else if(marks>=50)
	{
        cout<<"\n Grade: E";
    }
    else 
	{
        cout<<"\n Grade: F (Fail)";
    }

}
