//Array Sum and Average
#include <iostream>
using namespace std;

int main() 
{
    int n; 

    cout<<"\n Enter the number of elements: ";
    cin>>n;

    int arr[n];
    
    cout<<"\n Enter "<<n<<" integers:";
    for(int i=0; i<n; i++) 
	{
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0; i<n; i++) 
	{
        sum+=arr[i];
    }

    double average=static_cast<double>(sum)/n;

    cout<<"\n Sum: "<<sum;
    cout<<"\n Average: "<<average;

    return 0;
}
