// Write a program to find the product of two numbers using pointers.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    int* p1 = &a;
    int* p2 = &b;
    int product = (*p1) * (*p2) ;
    cout<<product;
    return 0;
}