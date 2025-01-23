// Q. Take a single character as input and check weather it is an alphabet or number or any symbol.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    char ch;
    cin>>ch;
    if((int)ch>=65 && (int)ch <=122){
        cout<<"Character is Alphabet.";
    }
    else if((int)ch >= 48 && (int)ch <= 57){
        cout<<"Character is a number";
    }
    else{
        cout<<"Character is a symbol.";
    }
    return 0;
}