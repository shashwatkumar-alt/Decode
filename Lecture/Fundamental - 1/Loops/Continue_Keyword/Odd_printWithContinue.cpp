//Q. Print odd numbers from 1 to n using continue keyword.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number till which you want to see odd numbers : ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        if(i%2==0) continue;
        else cout<<i<<endl;
    }
    
    return 0;
}