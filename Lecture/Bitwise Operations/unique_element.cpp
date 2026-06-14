// Given an integer array where every element occurs twice except one occurs only once. Find that unique element.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    cout<<"Enter number of elements : (odd only) ";
    int n;
    cin>>n;
    int num = 0;
    cout<<"Enter elements :";
    for(int i = 0; i<n;i++){
        int temp;
        cin>>temp;
        num = num ^ temp;
    }
    cout<<num;
    return 0;
}