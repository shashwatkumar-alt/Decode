// Q. Print this AP till n terms : 100, 97, 94, ...

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of terms :";
    cin>>n;
    int a = 100;
    for(int i = 0; i<n;i++){
        cout<<a<<endl;
        a-=3;
    }
    return 0;
}