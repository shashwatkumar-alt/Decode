// Take 2 integers input and print the greatest of them.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,m;
    cout<<"Enter the numbers : ";
    cin>>n>>m;
    int g =  n >= m ? n : m;
    cout<<g;
    return 0;
}