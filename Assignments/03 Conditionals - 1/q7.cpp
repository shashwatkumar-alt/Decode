// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int x,y;
    cout<<"Enter coordinates : ";
    cin>>x>>y;
    if( x == 0 && y == 0) cout<<"Point lies at origin.";
    else cout<<"Point does not lies at origin";
    return 0;
}