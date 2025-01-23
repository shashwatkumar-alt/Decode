// Q. Take an integer as an input and print if the number is divisible by 5 or 3;


#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%5==0 || n%3 ==0){
        cout<<"Divisible by both 5 or 3."<<endl;
    }
    else{
        cout<<"NOT Divisible by both 5 or 3."<<endl;
    }
    return 0;
}