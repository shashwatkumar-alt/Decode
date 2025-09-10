#include <bits/stdc++.h>
using namespace std;

long long req(long long n,long long k,long long x){
    auto calc=[&](long long a,long long b){
        if(b<=0) return 0LL;
        if(b<a) return (a+a-b+1)*b/2;
        return (a+1)*a/2+b-a;
    };
    return calc(x-1,k-1)+calc(x-1,n-k)+x;
}

int findMaximumBandwidth(int n,int k,int m){
    long long l=1,r=m,ans=1;
    while(l<=r){
        long long mid=(l+r)/2;
        if(req(n,k,mid)<=m){ans=mid;l=mid+1;}
        else r=mid-1;
    }
    return (int)ans;
}

int main(){
    int n,k,m;
    cin>>n>>k>>m;
    cout<<findMaximumBandwidth(n,k,m);
}
