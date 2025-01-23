#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        for(int i = 0; i< 100; i++){
            if(s[i]=='p') cout<<'q';
            else if(s[i]=='w') cout<<'w';
            else cout<<'p';
        }
        cout<<endl;
    }
    return 0;
}