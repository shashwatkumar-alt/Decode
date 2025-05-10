// Input a string and concatenate with its reverse string and print it.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    string str;
    getline(cin,str);
    // int n = str.size();
    string rev = str;
    reverse(str.begin(),str.end());
    rev = rev+str;
    cout<<rev;
    return 0;
}