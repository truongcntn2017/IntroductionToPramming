#include <iostream>

using namespace std;

int main(){
    enum MONTHS {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

    MONTHS bestMonth;

    bestMonth = Jan;
    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    }

    return 0;
}