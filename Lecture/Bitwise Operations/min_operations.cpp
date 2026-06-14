// Calculate the minimum number of bit flips to convert from one given number to another given number.

#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Enter x and y :\n";
    int x,y;
    cin>>x>>y;
    x = x ^ y;
    cout<<__builtin_popcount(x);
    return 0;
}