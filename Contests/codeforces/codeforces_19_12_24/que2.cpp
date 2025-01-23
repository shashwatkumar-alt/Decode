#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n,t=1;
        cin>>n>>k;
        int array[n];
        int a=k-1;
        while(a<n){
            array[a]=t;
            t++;
            a+=k;
        }
        a=0;
        t=n;
        while(a<n){
            if((a+1)%k!=0){
                array[a]=t;
                t--;
            }
            a++;
        }
        for(a=0;a<n;a++){
            cout<<array[a]<<" ";
        }
        cout<<endl;
    }
}