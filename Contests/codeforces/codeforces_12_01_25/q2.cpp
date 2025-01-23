#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector < long> a(n);
        vector < long> b(n);
        vector <int> diff(n);
        // input for array a.
        for(int i =0; i<n;i++){
            cin>>a[i];
        }
        // input of array b and difference array.
        for(int i =0; i<n;i++){
            cin>>b[i];
            diff[i]=a[i]-b[i];
        }
        sort(diff.begin(),diff.end());
        if(diff[0]<0 && diff[1]<0) cout<<"NO"<<endl;
        else if(diff[0]>=0 && diff[1]>=0) cout<<"YES"<<endl;
        else{
            if(abs(diff[0])<=diff[1]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }        
    }
    return 0;
}