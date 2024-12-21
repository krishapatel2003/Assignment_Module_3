//Type Conversion
#include <iostream>
using namespace std;

int main() 
{
    int integerVar=100;  
    double doubleVar=5.5;
    
    double result=integerVar+doubleVar;
    
    cout<<"\n************Implicit Conversion Example*****************";
    cout<<"\n";
    cout<<"\n integerVar: "<<integerVar;
    cout<<"\n doubleVar: "<<doubleVar;
    cout<<"\n Result of integerVar + doubleVar: "<<result;
    
    double doubleVal=9.99;
    
    int intVal=static_cast<int>(doubleVal);
    cout<<"\n";
    
    cout<<"\n************Explicit Conversion Example****************";
	cout<<"\n";
	cout<<"\n doubleVal: "<<doubleVal;
    cout<<"\n Converted intVal: "<<intVal;
    
    char charVal='A';
    int charToInt=(int)charVal; 
    cout<<"\n";
    cout<<"\n************C-Style Cast Example*******************";
    cout<<"\n charVal: "<<charVal;
    cout<<"\n Converted charToInt: "<<charToInt;
    cout<<"\n\n\n";
    return 0;
}
