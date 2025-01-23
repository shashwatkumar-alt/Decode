// program to print AP till n

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n, a,d;
    cout<<"Enter first element : ";
    cin>>a;
    cout<<"Enter common difference : ";
    cin>>d;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 1; i<=n;i++){
        cout<<(a+(i-1)*d)<<" ";
    }
    return 0;
}