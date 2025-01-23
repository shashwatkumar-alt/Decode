#include<bits/stdc++.h>
using namespace std;
int main() { 
    string s;
    cin>>s;
    int n = s.length();
    unordered_map<string, int> m;
    for(int i = 0; i<n ; i++){
        string curr = "";
        for(int j = i; j<n ;j++){
            if(curr.empty()||curr.back()==s[j]){
                curr.push_back(s[j]);
                m[curr] += 1;
            }
            else break;
        }
    }
    int result = 0;
    for(auto& it: m ){
        string str = it.first;
        int count = it.second;
        if(count>=3 && str.length() > result){
            result = str.length();
        }
    }
    int z = ((result)==0)?-1:result;
    cout<<z;
    return 0;
}