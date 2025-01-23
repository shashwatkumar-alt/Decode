#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr;
        vector <int> res;
        bool mo = false,o = false; 
        for(int i = 0; i < n; i++){
            int g;
            cin>>g
            arr.push_back(g);
            if(arr[i]==(-1)) mo = true;
            else if(arr[i]==1) o = true;
        }
        res.push_back(0);
        if(mo == true) res.push_back(-1);
        if(o == true) res.push_back(1);
        int cult = 1;
        while(cult<=n-1){
            for(int i = 0; i<n-(cult-1);i++){
                int sum = 0;
                for(int j = i; j< i+cult;j++){
                    sum += arr[i];
                }
                bool u = true;
                for(auto g:res){
                    if(sum == g) u = false;
                }
                if(u==true) res.push_back(sum);
            }
        }
        cout<<res.size()<<endl;
        for(auto i : )
    }
    return 0;
}