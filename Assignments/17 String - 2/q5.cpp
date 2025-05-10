// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with

#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main() { 
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> s;
    while(ss>>temp){
        s.push_back(temp);
    }
    sort(s.rbegin(),s.rend());
    cout<<s[0];
    return 0;
}