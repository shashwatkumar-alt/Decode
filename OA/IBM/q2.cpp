#include <bits/stdc++.h>
using namespace std;

int countHighlyProfitableMonths(vector<int> stockPrices, int k) {
    int n=stockPrices.size(),ans=0,len=1;
    if(k==1) return n;
    if(k>n) return 0;
    for(int i=1;i<n;i++){
        if(stockPrices[i]>stockPrices[i-1]) len++;
        else len=1;
        if(len>=k) ans++;
    }
    return ans;
}

int main(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<countHighlyProfitableMonths(a,k);
}
