#include<bits/stdc++.h>
using namespace std;
int main() { 
    int x,y;
    cout<<"Enter x and y : ";
    cin>>x>>y;
    int *p1 = &x;
    int *p2 = &y;
    cout<< *p1 + *p2;
    return 0;
}