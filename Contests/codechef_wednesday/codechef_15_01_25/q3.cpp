#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        int count=0, fidx = -1,lidx=-1;
        bool used = false;
        for(int i = 0; i<n;i++){
            int temp;
            cin>>temp;
            arr[i]= temp;
            if(arr[i]==k){
                count++;
                if(used == false){
                    fidx = i;
                    lidx = i;
                    used = true;
                }
                else lidx = i;
            }
        }
        cout<<"fidx " <<fidx<<endl;
        cout<<"lidx " <<lidx<<endl;
        if(count>(ceil)(n/2)) cout<<0<<endl;
        else if((count> (ceil)(n-fidx)/2) || count>(ceil)(n-(n-lidx))/2 ) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}