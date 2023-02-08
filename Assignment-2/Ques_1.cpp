#include<iostream>
using namespace std;
// Check whether two numbers are equal or not
int main() {
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    bool flag;
    (a == b)? flag = true : flag = false;
    cout<<flag<<endl;

    return 0;
}