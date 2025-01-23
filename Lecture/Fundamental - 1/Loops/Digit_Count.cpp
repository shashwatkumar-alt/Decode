//Q.  WAP to count digits of a given number.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count = 0;
    while(n>0){
        count++;
        n/=10;
    }
    cout<<count;
    return 0;
}