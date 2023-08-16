#include <iostream>
#include <cmath>
using namespace std;

bool is_check(int mid, int input){
    return mid*(mid+1)/2 >= input;
}

int binary_search(int input){
    int result = 0;
    int left = 1;
    int right = input;
    int mid;

    while (left <= right){
        mid = (left + right)/2;
        if (is_check(mid, input)){
            result = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }

    }

    return result;
}

int main(){
    string input_from_question;
    int input;

    cin>> input_from_question;

    input = stoi(input_from_question);
    input = binary_search(input);

    cout<<to_string(input)<<endl;

    return 0;
}