#include<iostream>
using namespace std;
// 1st and 2nd last digit sum of a 5-digit number
int main() {
    int num , first_digit , second_digit , third_digit , fourth_digit , fifth_digit , sum;
    cout<<"Enter a 5-digit number: ";
    cin>>num;

    first_digit = num / 10000;
    num = num % 10000;
    second_digit = num / 1000;
    num = num % 1000;
    third_digit = num / 100;
    num = num % 100;
    fourth_digit = num / 10;
    fifth_digit = num % 10;

    sum = first_digit + fourth_digit;
    cout<<""<<first_digit<<" + "<<fourth_digit<<" = "<<sum<<""<<endl;
    return 0;
}