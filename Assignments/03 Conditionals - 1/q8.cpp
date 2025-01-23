// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter first coordinates : ";
    cin>>x1>>y1;
    cout<<"Enter second coordinates : ";
    cin>>x2>>y2;
    cout<<"Enter third coordinates : ";
    cin>>x3>>y3;
    if(x1 == x2 && x2 == x3) cout<<"Exists in straight line.";
    else if(y1 == y2 && y2 == y3) cout<<"Exists in straight line.";
    else cout<<"Does not exists in straight line.";
    return 0;
}