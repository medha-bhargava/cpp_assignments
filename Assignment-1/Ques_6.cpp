#include<iostream>
using namespace std;
// Swapping two numbers
int main() {
    int a,b,temp;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    cout<<"Before swapping a = "<<a<<" and b = "<<b<<"\n";

    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping a = "<<a<<" and b = "<<b<<"";
    
    return 0;
}