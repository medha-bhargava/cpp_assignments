#include<iostream>
using namespace std;
// Calculator
int main() {
    float num1,num2,sum,difference,product,division;
    char operation;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter operaror: ";
    cin>>operation;

    switch(operation) {
        case '+':
            sum = num1 + num2;
            cout<<"Sum = "<<sum<<"";
            break;
        case '-':
            difference = num1 - num2;
            cout<<"Difference = "<<difference<<"";
            break;
        case '*':
            product = num1 * num2;
            cout<<"Product = "<<product<<"";
            break;
        case '/':
            if(num2 != 0) {
                division = num1 / num2;
                cout<<"Division = "<<division<<"";
            } else { 
                cout<<"Can't divide with 0";
            }
            break;
        default:
            cout<<"Invalid input";
    }
    return 0;
}