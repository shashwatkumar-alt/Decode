// Check whether the given string is palindrome or not.
// Input : "abcde"      Output : No
// Input : "abcdcba"    Output : Yes

#include<bits/stdc++.h>
using namespace std;
int main() { 
    string str;
    getline(cin,str);
    int n = str.size();
    int num;
    if(n%2==0) num = n/2;
    else num = (n+1)/2;
    string s1,s2;
    for(int i = 0; i<num;i++){
        s1.push_back(str[i]);
        s2.push_back(str[n-i-1]);
    }
    if(s1 == s2) cout<<"Palindrome.";
    else cout<<"Not Palindrome.";
    return 0;
}