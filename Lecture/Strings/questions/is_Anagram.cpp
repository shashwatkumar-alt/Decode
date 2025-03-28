#include<bits/stdc++.h>
using namespace std;
int main() { 
    string a,b;
    cin>>a>>b;
    if(a.size() != b.size()){
        cout<<"NOT AN ANAGRAM."<<endl;
        return 0;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    bool anagram = true;
    for(int i = 0; i<a.size();i++){
        if(a[i] != b[i]){
            anagram = false;
            break;
        }
    }
    if(anagram) cout<<"ANAGRAM"<<endl;
    else cout<<"NOT AN ANAGRAM"<<endl;
    return 0;
}