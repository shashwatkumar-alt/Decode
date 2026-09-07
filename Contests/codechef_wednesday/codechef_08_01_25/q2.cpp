#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int hp[n];
        for(int i =0; i<n;i++){
            cin>>hp[i];
        }
        int min=hp[0];
        for(int i = 0; i<n;i++){
            if(hp[i]>=min){
                cout<<"1 ";
                min = hp[i];
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}