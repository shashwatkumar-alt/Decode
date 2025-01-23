// Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    char a;
    cout<<"Enter character : ";
    cin>>a;
    if((int)a>=48 && (int)a<=57) cout<<"Number";
    else if(((int)a>=65 && (int)a<=90) ||((int)a>=97 && (int)a<=122) ) cout<<"Alphabet";
    else cout<<"Special Character / Symbol";
    return 0;
}