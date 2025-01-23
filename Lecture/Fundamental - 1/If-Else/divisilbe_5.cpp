// Q. Take an integer as an input and check if it is divisible by 5.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%5==0){
        cout<<"Divisible";
    }
    else{
        cout<<"NOT Divisible.";
    }
    return 0;
}