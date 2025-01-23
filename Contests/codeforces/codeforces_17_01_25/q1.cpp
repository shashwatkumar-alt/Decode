#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector <int> x(n);
        vector <int> y(n);
        for(int i =0 ; i<n;i++){
            cin>>x[i];
            cin>>y[i];
        }
        int peri=n*4*m;
        for(int i=1;i<n;i++){
            peri-=2*(m-x[i]+m-y[i]);
            
        }
        cout<<peri<<endl;;

    }
    return 0;
}