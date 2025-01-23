// WAP to print the sum of all the even digits of a given number.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int sum=0;
    while(num>0){
        int rem = num %10;
        if(rem %2==0) sum+= rem;
        num /= 10;
    }
    cout<<sum;
    return 0;
}