// Write a function to count the number of digits in a number and then print the square of this number.

#include<bits/stdc++.h>
using namespace std;
int square (int n ){
    return (n*n);
}
int digit(int n){
    int count = 0;
    while(n>0){
        count++;
        n /= 10;
    }
    return count;
}
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<digit(n)<<" digits is the number."<<endl;
    cout<<square(n)<<" is the square of the number.";
    return 0;
}