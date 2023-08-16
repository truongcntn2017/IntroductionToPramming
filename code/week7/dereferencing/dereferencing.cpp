#include <iostream>

using namespace std;

int main(){
    int a = 54;
    int* pointerToA = &a;

    // If we were to print pointerToA, we'd obtain the address of 'a':
    cout << "pointerToA stores " << pointerToA << '\n';

    // If we want to know what is stored in this address, we can dereference pointerToA:
    cout << "pointerToA points to " << * pointerToA << '\n';
    return 0;
}