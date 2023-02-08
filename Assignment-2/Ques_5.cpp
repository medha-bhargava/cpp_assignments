#include<iostream>
using namespace std;
// Sum of a 3-digit number
int main() {
    int num , first_digit , second_digit , third_digit , sum;
    cout<<"Enter a 3-digit number: ";
    cin>>num;

    first_digit = num / 100;
    num = num % 100;
    second_digit = num / 10;
    third_digit = num % 10;

    sum = first_digit + second_digit + third_digit;
    cout<<""<<first_digit<<" + "<<second_digit<<" + "<<third_digit<<" = "<<sum<<""<<endl;
    return 0;
}