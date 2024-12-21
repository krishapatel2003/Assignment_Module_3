//Multiplication Table
#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout<<"\n Enter a number to display its multiplication table: ";
    cin>>number;

    cout<<"\n Multiplication table of "<<number<<" is:\n";
    for(int i=1; i<=10; i++) 
	{
		cout<<"\n";
        cout<<number<<" x "<<i<<" = "<<number*i;
    }
    return 0;
}

