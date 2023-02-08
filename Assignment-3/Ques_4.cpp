#include<iostream>
using namespace std;
// Number entered
int main() {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    if(n > 0) {
        cout<<"Positive number";
    } else {
        cout<<"The number is negative and skipped";
    }
    return 0;
}