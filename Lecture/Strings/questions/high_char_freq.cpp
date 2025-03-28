// Given n strings consisting of lowercase English alphabets. Print the character that is occuring most number of times.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    string s;
    getline(cin,s);
    unordered_map<char,int>mpp;
    for(int i = 0; i<s.size();i++){
        mpp[s[i]]++;
    }
    int maxi = mpp[s[0]];
    char cmax = s[0];
    for(auto i : mpp){
        if(i.second > maxi){
            maxi = i.second;
            cmax = i.first;
        }
    }
    cout<<cmax<<" : "<<maxi;
    return 0;
}