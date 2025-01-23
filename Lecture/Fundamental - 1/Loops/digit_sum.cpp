//Q. WAP to print sum of digits of a given number.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum=0;
    while(n>0){
        sum += (n%10);
        n/=10;
    }
    cout<<sum;
    return 0;
}