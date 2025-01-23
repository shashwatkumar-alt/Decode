//Q. Print fibonacci upto n terms.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    int a = 0, b = 1;
    cout<<a<<endl<<b<<endl;
    while(n-2>0){
        int c = a + b;
        cout<<c<<endl;
        a = b;
        b = c;
        n--;
    }
    return 0;
}