#include<iostream>
using namespace std;
// Calculator
int main() {
    float num1 , num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"Sum = "<<num1 + num2<<endl;
    cout<<"Difference = "<<num1 - num2<<endl;
    cout<<"Product = "<<num1 * num2<<endl;
    cout<<"Division = "<<num1 / num2<<endl;
    cout<<"Modulo = "<<(int)num1 % (int)num2<<endl;

    return 0;
}