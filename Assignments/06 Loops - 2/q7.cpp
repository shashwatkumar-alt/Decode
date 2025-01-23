// Print the factorials of first ‘n’ numbers

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,fact=1;
    cout<<"Enter number : ";
    cin>>n;
    for(int i = 1; i <= n;i++){
        fact *= i;
        cout<<fact<<endl;
    }
    return 0;
}