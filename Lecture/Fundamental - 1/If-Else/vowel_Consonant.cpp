// Q. WAP to check if the given character is a vowel or consonant.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    char ch;
    cin>>ch;
    int v = (int)ch;
    if(v == 65 ||v == 73 ||v == 79 ||v == 85 ||v == 97 ||v == 101 ||v == 105 ||v == 111 ||v == 117) cout<<"Vowel";
    else cout<<"Consonant";
    return 0;
}