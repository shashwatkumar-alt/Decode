//Q. Print the AP upto n: 1,3,5,7,9, ...

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of terms :"<<endl;
    cin>>n;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<endl;
        a+=2;
    }
    
    return 0;
}