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
void reset(vi& brr, vi& crr,vi& arr){
    for(int i = 0;i<crr.size();i++){
        brr[crr[i]] = arr[crr[i]];
    }
    crr.clear();
}
void conquer(){
    int n,m,h;
    cin>>n>>m>>h;
    vi arr(n),brr(n);
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
        brr[i] = arr[i];
    }
    vi crr;
    for(int i = 0;i<m;i++){
        int a,b;
        cin>>a>>b;
        brr[a-1] += b;
        if(brr[a-1]> h) reset(brr,crr,arr);
        else{
            crr.push_back(a);
        }
    }
    for(int i = 0;i<n;i++) {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}