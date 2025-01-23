// Write a function to print squares of first n natural numbers, taking n as argument to the function.

#include<bits/stdc++.h>
using namespace std;
void square (int n){
    for(int i = 1;i<=n;i++){
        cout<<"Square of "<<i<<" is "<<i*i<<endl;
    }
}
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    square(n);
    return 0;
}