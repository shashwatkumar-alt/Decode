#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string S;
        cin>>S;
        string T= "\0";
        for(int i = 0;i<n;i++){
            T = (!S[i]) + T;
        }
        cout<<T<<endl;
    }
    return 0;
}