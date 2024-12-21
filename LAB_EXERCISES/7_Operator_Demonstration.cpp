//Operator Demonstration
#include <iostream>
using namespace std;

int main() 
{
    int a=10, b=5;
    bool result;
    int x=12, y=6;

    int sum=a+b;
    int difference=a-b;
    int product=a*b;
    int quotient=a/b;
    int remainder=a%b;

    cout<<"\n Arithmetic Operators:";
    cout<<"\n a + b = "<<sum;
    cout<<"\n a - b = "<<difference;
    cout<<"\n a * b = "<<product;
    cout<<"\n a / b = "<<quotient;
    cout<<"\n a % b = "<<remainder;

    result=(a==b);
    cout<<"\n Relational Operators:";
    cout<<"\n a == b: "<<result;

    result=(a!=b);
    cout<<"\n a != b: "<<result;

    result=(a>b);
    cout<<"\n a > b: "<<result;

    result=(a<b);
    cout<<"\n a < b: "<<result;

    result=(a>=b);
    cout<<"\n a >= b: "<<result;

    result=(a<=b);
    cout<<"\n a <= b: "<<result;

    result=(a>b)&&(x>y);  
	cout<<"\n Logical Operators:";
    cout<<"\n (a > b) && (x > y): "<<result;

    result=(a<b)||(x>y); 
	cout<<"\n (a < b) || (x > y): "<<result;

    result=!(a>b); 
    cout<<"\n !(a > b): "<<result;

    int bitwiseAnd=a&b;  
    int bitwiseOr=a|b;   
    int bitwiseXor=a^b;  
    int bitwiseNot=~a;    
    int leftShift=a<<1;  
    int rightShift=a>>1;

    cout<<"\n Bitwise Operators:";
    cout<<"\n a & b = "<<bitwiseAnd;
    cout<<"\n a | b = "<<bitwiseOr;
    cout<<"\n a ^ b = "<<bitwiseXor;
    cout<<"\n ~a = "<<bitwiseNot;
    cout<<"\n a << 1 = "<<leftShift;
    cout<<"\n a >> 1 = "<<rightShift;

}
