#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[m], b[k];
        for(int i = 0 ; i < m ; i++){
            cin>>a[i];
        }
        for(int i =0; i< k ; i++){
            cin>>b[i];
        }
        if(n == k){
            for(int i = 0; i< m ; i++){
                cout<<1;
            }
            cout<<endl;
        }
        else if(n-1>k){
            for(int i = 0; i< m ; i++){
                cout<<0;
            }
            cout<<endl;
        }
        else if(n-1 == k){
            int flag = 1;
            for(int i = 0; i<k;i++){
                if(b[i]==flag) flag++;
                else break;
            }
            for(int i = 0 ; i<m ; i++){
                if(a[i]==flag) cout<<1;
                else cout<<0;
            }
            cout<<endl;
        }
    }
    return 0;
}