#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i = 0; i<n ; i++){
            cin>>a[i];
        }
        for(int i = 0; i<n ; i++){
            cin>>b[i];
        }
        int sum = a[n-1];
        for(int i = n-2 ; i>=0;i--){
            if(a[i]>b[i+1]) sum += (a[i]-b[i+1]);
        }
        cout<<sum<<endl;
    }
    return 0;
}