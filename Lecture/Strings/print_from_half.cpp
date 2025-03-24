// Input a string of even length and return the second half of that string using inbuilt substr function.
#include<bits/stdc++.h>
using namespace std;
int main() { 
    string s;
    getline(cin,s);
    cout<<s.substr(s.size()/2,s.size()/2);
    return 0;
}