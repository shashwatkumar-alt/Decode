//Q. Take a positive integer input and tell if it is divisible by 5 or 3 but not by 15.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%5 ==0 || n%3 ==0){
        if(n%15 ==0){
            cout<<"Numbner is divisible by 5 or 3 and 15.";
        }
        else cout<<"Number is divisible by 5 or 3 but not by 15";
    }
    else cout<<"Number is not divisible by 5 or 3 or 15";
    return 0;
}