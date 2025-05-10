// Input a string of length n and count all the consonants in the given string

#include<bits/stdc++.h>
using namespace std;
int main() { 
    string str;
    getline(cin,str);
    int n = str.size();
    int count = 0;
    for(int i = 0; i<n;i++){
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u') count++;
    }
    cout<<(n-count);
    return 0;
}