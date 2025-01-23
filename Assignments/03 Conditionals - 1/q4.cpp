// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int l, b;
    cout<<"Enter the dimensions : ";
    cin>>l>>b;
    (2*(l+b)) >= (l*b) ? cout<<"Perimeter " : cout<<"Area ";
    cout<<"is numerically greater.";
    return 0;
}