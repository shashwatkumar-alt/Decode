// Given a sentence 'str', return the word that is occuring most number of times in that sentence.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    unordered_map<string,int> s;
    while(ss>>temp){
        s[temp]++;
    }
    int maxi = s[temp];
    str = temp;
    for(auto i : s){
        if(i.second > maxi){
            maxi = i.second;
            str = i.first;
        }
    }
    cout<<str<<" : "<<maxi;
    return 0;
}