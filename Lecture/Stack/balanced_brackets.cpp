#include<bits/stdc++.h>
using namespace std;

bool balanced(string s){
    stack<char> st;
    for(char &i : s){
        if(i == '{') st.push('{');
        else {
            if(st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() { 
    string s = "{}{}{{{}}}";
    balanced(s) ? cout<<"Yes\n" : cout<<"No\n";
    return 0;
}