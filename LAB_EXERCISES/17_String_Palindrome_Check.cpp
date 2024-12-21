//String Palindrome Check
#include <iostream>
using namespace std;

bool isPalindrome(const string& str) 
{
    int start=0;
    int end=str.length()-1;
    
    while(start<end) 
	{
        if(str[start]!=str[end]) 
		{
            return false; 
        }
        start++;
        end--;
    }
    return true;  
}
int main() 
{
    string input;
    cout<<"Enter a string: ";
    cin>>input;

    if(isPalindrome(input)) 
	{
        cout<<"\n The string is a palindrome!";
    } 
	else 
	{
        cout<<"\n The string is not a palindrome!";
    }

    return 0;
}
