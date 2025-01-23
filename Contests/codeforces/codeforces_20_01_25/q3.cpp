#include<bits/stdc++.h>
using namespace std;
bool equal(int& a, int a_size, int& b, int b_size){
    if(a_size == b_size){
        
    }
    return false;
}

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        for(int i =0;i<m;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int i = 0,j=0;
        

    }
    return 0;
}