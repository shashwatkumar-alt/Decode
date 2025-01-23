//Q. WAP to check if a number is composite or not.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool flag = true;
    for(int i = 2; i<n/2;i++){
        if(n%i == 0){
            flag = false;
        }
    }
    if(flag == true){
        cout<<"The number is not a composite number.";
    }
    else cout<<"The number is Composite.";
    return 0;
}