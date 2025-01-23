// Q. Print the AP upto n: 4,7,10,...

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of terms :"<<endl;
    cin>>n;
    int a = 4;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<endl;
        a+=3;
    }
    
    return 0;
}