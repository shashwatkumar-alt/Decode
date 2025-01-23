// Given two numbers a and b, write a function to print all odd numbers between them.

#include<bits/stdc++.h>
using namespace std;
void odd (int a, int b){
    if(a%2==0) a++;
    for(int i = a ; i < b;i+=2){
        cout<<i<<" ";
    }
    return;
}
int main() { 
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    odd(a,b);
    return 0;
}