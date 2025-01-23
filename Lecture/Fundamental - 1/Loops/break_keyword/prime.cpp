// Q. Check weather the number is prime or not.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the  number : ";
    cin>>n;
    bool flag = true;
    for(int i = 2; i<=n/2;i++){
        if(n%i == 0){
            flag = false;
        }
    }
    if(flag == true) cout<<"The number is Prime number.";
    else cout<<"The number is NOT a Prime number.";
    return 0;
}