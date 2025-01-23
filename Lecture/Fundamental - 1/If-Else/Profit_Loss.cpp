// Q. If cost price and selling price of an item is input, WAP to determine the seller has made profit or loss . Also, determine how much profit or loss was made.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int cp,sp;
    cout<<"Enter the Cost Price: ";
    cin>>cp;
    cout<<"Enter the selling Price: ";
    cin>>sp;
    if(cp<sp){
        cout<<"Profit"<<endl<<sp-cp;
    }
    else if(cp==sp){
        cout<<"No profit No loss";
    }
    else{
        cout<<"Loss"<<endl<<cp-sp;
    }
    return 0;
}