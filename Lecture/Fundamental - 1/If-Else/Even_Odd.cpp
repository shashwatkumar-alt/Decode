//Q. Take an integer as an input and check weather it is even or odd.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%2==0){
        cout<<"EVEN."<<endl;
    }
    else{
        cout<<"ODD."<<endl;
    }
    return 0;
}