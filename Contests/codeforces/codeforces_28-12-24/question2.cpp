#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> l(n);
        vector <int> r(n);
        vector <int> result;
        vector <int> distinct;
        for(int i = 0; i<n;i++){
            int le,ri;
            cin>>l>>r;
            l.push_back(le);
            r.push_back(ri);
            bool un = true;
            for(auto j:distinct){
                if(j==le) un = false;
            }
            if(un == true) distinct.push_back(le);
        }
        sort(distinct.begin(),distinct.end());
        for(int i = 0; i<distinct.size();i++){
            vector <int> idx;
            for(int j = 0; j<l.size();j++){
                
            }
        }
    }    
    return 0;
}