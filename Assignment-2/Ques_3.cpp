#include<iostream>
using namespace std;
// How many girls recieved "A" grade
int main() {
    int total,boys,girls;
    boys = 17;
    total = (80*45)/100;
    girls = total - boys;
    
    cout<<"Number of girls recieved 'A' grade: "<<girls<<""<<endl;
    return 0;
}