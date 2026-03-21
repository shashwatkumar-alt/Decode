#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<vector<ll>> vvll;
typedef pair<int,int> pi;
typedef vector<vector<char>> vvc;
typedef vector<vector<int>> vvi;
typedef pair<ll,ll> pll;
static const bool fastIO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
void conquer(){
    int n;
    cin>>n;
    vi a(n),b(n);
    for(int i = 0; i<n;i++) cin>>a[i];
    b[n-1] = 0;
    for(int i = n-2; i>=0;i--){
        int n_count = 0, p_count = 0;
        for(int j = i+1;j<n;j++){
            if(a[j]>a[i]) p_count++;
            else if(a[j] == a[i]) continue;
            else n_count++;
        }
        b[i] = max(n_count,p_count);
    }
    for(int i = 0 ; i < n ; i++){
        cout<<b[i]<<" ";
    }
    cout<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}