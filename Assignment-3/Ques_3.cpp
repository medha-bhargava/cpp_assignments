#include<iostream>
using namespace std;
// Profit and Loss
int main() {
    float costPrice , sellingPrice;
    cout<<"Enter Cost Price: ";
    cin>>costPrice;
    cout<<"Enter Selling Price: ";
    cin>>sellingPrice;

    if(sellingPrice > costPrice) {
        int Profit;
        Profit = sellingPrice - costPrice;
        cout<<"Profit = "<<Profit<<"";
    } else if(costPrice < sellingPrice) {
        int Loss;
        Loss = costPrice - sellingPrice;
        cout<<"Loss = "<<Loss<<"";
    } else {
        cout<<"No Profit and No Loss";
    }
    return 0;
}