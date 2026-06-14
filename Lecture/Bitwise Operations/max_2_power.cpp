// Given an integer n, find the maximum power of two that is smaller than n.
// example, 24 : 16, 100 : 64

#include<bits/stdc++.h>
#include<bit>
using namespace std;
int main() { 
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    int count = bit_width(n);
    for(int i = 1; i< count; i++){
        n = (n & (n-1));
    }
    cout<<n<<endl;
    return 0;
}