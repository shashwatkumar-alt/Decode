// If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a,b,c;
    cout<<"Enter marks:";
    cin>>a>>b>>c;
    if(a<b){
        if(a<c) cout<<"A scored the least marks.";
        else cout<<"C scored the least marks.";
    }
    else{
        if(b<c) cout<<"B scored the least marks.";
        else cout<<"C scored the least marks.";
    }
    return 0;
}