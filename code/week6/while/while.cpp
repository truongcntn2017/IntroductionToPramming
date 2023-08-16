/*Goal: understand the syntax of while loops*/

#include <iostream>

using namespace std;


int main()
{
    int entry = 0;
    
    //with this while loop the condition is true
    //so the statements are executed
    while(entry <=5)
    {
        cout<<"incrementing entry = "<<entry<<"\n";
        entry++;
    }
    
    //with this while loop the condition is false
    //so the statements are not executed
    while(entry < 5)
    {
        cout<<"decrementing entry = "<<entry<<"\n";
        entry--;
    }
        
    return 0;
}