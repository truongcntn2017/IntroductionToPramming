#include <iostream>
#include<sstream>
using namespace std;

int main()
{
    int target = rand()%100;
    string userString;
    int guess = -1;

    while(guess != target )
    {
        cout<<"Guess a number between 0 and 100: ";
        cin>>guess;
        cout<<guess<<"\n";
        if(guess > target)
            cout<<"Your guess is too high\n";
        else if(guess < target)
            cout<<"Your guess is too low\n";
        else
            cout<<"You guessed the target!\n";

        //Note I had to use double quotes around "q"
        //because it is a string
        if(guess == -1)
        {
            cout<<"good bye!";
            break;
        }
    }
    return 0;
}