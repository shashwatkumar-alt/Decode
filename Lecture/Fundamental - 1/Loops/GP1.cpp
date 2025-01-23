// Q. Print this GP till n terms : 1,2,4,8,16,32,...

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of terms :";
    cin>>n;
    int a = 1;
    for(int i = 0; i<n;i++){
        cout<<a<<endl;
        a *= 2;
    }

    return 0;
}