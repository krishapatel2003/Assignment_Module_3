//Matrix Addition
#include<iostream>
using namespace std;

int main() 
{
    int matrix1[2][2], matrix2[2][2], result[2][2];

    cout<<"\n Enter elements for the first 2x2 matrix:\n ";
    for(int i=0; i<2; i++) 
	{
        for (int j=0; j<2; j++) 
		{
            cout<<"\n Enter element at position ("<<i+1<<", "<<j+1<<"): ";
            cin>>matrix1[i][j];
        }
    }

    cout<<"\n\n\n Enter elements for the second 2x2 matrix:\n";
    for(int i=0; i<2; i++) 
	{
        for(int j=0; j<2; j++) 
		{
            cout<<"\nEnter element at position ("<<i+1<<", "<<j+1<<"):";
            cin>>matrix2[i][j];
        }
    }
    for(int i=0; i<2; i++) 
	{
        for(int j=0; j<2; j++) 
		{
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    cout<<"\n Result of matrix addition:";
    for(int i=0; i<2; i++) 
	{
        for(int j=0; j<2; j++) 
		{
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

