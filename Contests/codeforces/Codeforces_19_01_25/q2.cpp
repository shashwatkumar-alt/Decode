#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int all = n*m;
        vector <vector<int>> cow (n,vector<int> (m));
        vector <int> seq(all);
        for(int i = 0; i<n;i++){
            for(int j = 0; j<m;j++){
                cin>>cow[i][j];
                seq[cow[i][j]] = i;
            }
        }
        bool going = true;
        for(int i = n; i<all;i++){
            if(seq[i] != seq[i%n] ){
                going = false;
                break;
            }
        }
        if(going == false) cout<<-1<<endl;
        else{
            for(int i =0; i<n;i++) cout<<seq[i]+1<<" ";
            cout<<endl;
        }
    }
    return 0;
}