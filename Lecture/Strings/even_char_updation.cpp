// Input a string and update all even positions in string to character 'a'.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    string s;
    cin>>s;
    for(int i = 0; i<s.size();i++){
        if(i%2==0) s[i] = 'a';
    }
    cout<<s;
    return 0;
}