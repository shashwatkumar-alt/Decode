//Q. Take 3 integer as input and print the greatest of them.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int p,q,r;
    cout<<"Enter the three numbers :"<<endl;
    cin>>p>>q>>r;
    if(p>q && p>r){
        cout<<p<<endl;
    }
    if(q>p && q>r){
        cout<<q<<endl;
    }
    if(r>p && r>q){
        cout<<r<<endl;
    }
    return 0;
}