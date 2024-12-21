//Number Guessing Game
#include <iostream>
using namespace std;

int main() 
{
    int secretNumber=42;  
    int userGuess;
    int attempts=0;
    bool guessedCorrectly=false;

    cout<<"\n Welcome to the Guessing Game!";
    cout<<"\n Guess the number between 1 and 100.";

    while(!guessedCorrectly) 
	{
        cout<<"\n Enter your guess: ";
        cin>>userGuess;
        attempts++;  

        if(userGuess<secretNumber) 
		{
            cout<<"\n Too low! Try again.";
        } 
        else if(userGuess>secretNumber) 
		{
            cout<<"Too high! Try again.";
        } 
        else 
		{
            guessedCorrectly=true;
            cout<<"Congratulations! You guessed the number in "<<attempts<<" attempts.";
        }
    }
    return 0;
}
