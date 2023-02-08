#include<iostream>
using namespace std;
// Absolute value
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num < 0) {
        int absvalue;
        absvalue = (-1)*num;
        cout<<"The absolute value will be: "<<absvalue<<"";
    } else {
        cout<<"The absolute value will be: "<<num<<"";
    }
    return 0;
}