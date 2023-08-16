#include <iostream>

using namespace std;

int main(){
    int res = 0;
    int beer;

    cin >> beer;

    while (beer > 0){
        res = res + beer;
        beer /= 5;
    }

    cout<<res;

    return 0;
}