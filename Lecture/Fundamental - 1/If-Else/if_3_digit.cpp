// Q. Take an integer as input and print if the number is a 3 digit number.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if((n>99 && n<1000)||(n>(-1000)&&n<(-99))){
        cout<<"3 Digit Integer.";
    }
    else cout<<"NOT a 3 Digit Integer.";
    return 0;
}