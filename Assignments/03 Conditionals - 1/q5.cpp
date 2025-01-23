// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a,b,c;
    cout<<"Enter the sides of the triangle : ";
    cin>>a>>b>>c;
    if ( a  == b && b == c) cout<<"Equilateral triangle.";
    else if ((a == b && b != c)|| (a == c && a != b) || (b == c && b != a) ) cout <<"Isosceles triangle.";
    else cout<<"Scalene triangle";
    return 0;
}