//  print factorial of first n natural numbers and modulo the result by 10^9 + 7.

#include<bits/stdc++.h>
using namespace std;
#define MOD (1000000007)
int main() {
    cout<<"Enter n : ";
    int n;
    cin>>n;
    long long ans = 1;
    for(int i = 1; i <= n ; i++){
        ans = ((ans) % MOD * (i) % MOD ) % MOD;
        cout<<ans<<" ";
    }
    return 0;
}