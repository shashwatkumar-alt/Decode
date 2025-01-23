#include<bits/stdc++.h>
using namespace std;
bool degenerate(int x, int y){
    if( (2*x>y) && (2*y>x) ) return true;
    else return false;
}
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool degen = false;
        for(int i = 0; i<n;i++){
            cin>>arr[i];
            if(i>=1){
                int x = arr[i], y = arr[i-1];
                degen = degenerate(x,y);
            }
        }
        if(degen == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}