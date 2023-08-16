#include <iostream>
 #include <iomanip>

using namespace std;

int main(){

    cout<<"\n\nThe text without any formating\n";
    cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
    cout<<"\nThe text with setw(15)\n";
    cout<<"Ints"<<setw(15)<<"Floats"<<setw(15)<<"Doubles"<< "\n";
    cout<<"\n\nThe text with tabs\n";
    cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";

    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    cout<<"\nThe text with setw(14)\n";
    cout<<"Ints"<<setw(14)<<"Floats"<<setw(14)<<"Doubles"<< "\n";
    cout<< a<<setw(15)<<b<<setw(15)<<c<<endl;
    cout<< aa<<setw(15)<<bb<<setw(15)<<cc<<endl;
    cout<< aaa<<setw(15)<<bbb<<setw(15)<<ccc<<endl;


    return 0;
}