// WAP to print the sum of a given number and its reverse.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int rev = 0,sum=n;
    while(n>0){
        rev = (rev*10) + (n%10);
        n /= 10;
    }
    cout<<"Sum = "<<sum+rev;
    return 0;
}