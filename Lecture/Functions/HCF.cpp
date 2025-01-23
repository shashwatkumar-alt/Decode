#include<bits/stdc++.h>
using namespace std;

int HCF(int x, int y){
    for(int i = min(x,y); i >= 1; i--){
        if(x%i==0 && y%i ==0){
            return i;
        }
    }
    return 1;
}

int main() { 
    int x,y;
    cout<<"Enter x and y : ";
    cin>>x>>y;
    cout<<"The HCF of "<<x<<" and "<<y<<" is "<<HCF(x,y);
    return 0;
}