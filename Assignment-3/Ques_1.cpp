#include<iostream>
using namespace std;
// Check whether the input is forming a square or not
int main() {
    int length , breadth;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;

    if(length == breadth) {
        cout<<"It is a Square";
    } else {
        cout<<"Not a Square\n";
        cout<<"It is a rectangle";
    }
    return 0;
}