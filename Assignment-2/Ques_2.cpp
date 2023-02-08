#include<iostream>
using namespace std;
// Check if both the conditions 'a < 50' and 'a < b' are true.
int main() {
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    
    bool flag;
    ((a < 50) && (a < b))? flag = true : flag = false;
    cout<<flag<<endl;
    
    return 0;
}