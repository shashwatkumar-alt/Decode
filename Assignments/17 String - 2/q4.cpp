// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"           Output : True
// Input : s = "book" , t = "hook"         Output : False


#include<bits/stdc++.h>
using namespace std;
int main() { 
    string a,b;
    cin>>a>>b;
    if(a.size() != b.size()){
        cout<<" Not an anagram.";
        return 0;
    }
    unordered_map<char,int>arr;
    unordered_map<char,int>brr;
    for(int i =0;i<a.size();i++){
        arr[a[i]]++;
        brr[b[i]]++;
    }
    for(auto it : arr){
        if(it.second != brr[it.first]){
            cout<<" Not an anagram.";
            return 0;
        }
    }
    cout<<"Anagram.";
    return 0;
}