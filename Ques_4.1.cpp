#include<iostream>
using namespace std;
// Cube of a number
int main() {
    int num,cube;
    cout<<"Enter a number: ";
    cin>>num;

    cube = num * num * num;

    cout<<"Cube of "<<num<<" is: "<<cube;
    return 0;
}