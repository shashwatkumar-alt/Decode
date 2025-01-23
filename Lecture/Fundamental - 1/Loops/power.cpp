//Q. two numbers are taken as input. WAP to find the values of one number raised to the power of another.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a, b;
    cout<<"Enter the base: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    int res = 1;
    for(int i = 1; i<= b ;i++){
        res *= a;
    }
    cout<<res;
    return 0;
}