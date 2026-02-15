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
    ll n;
    cin>>n;
    vll arr(2*n);
    unordered_map<ll,ll>mpp;
    for(int i = 0 ; i < 2*n;i++){
        cin>>arr[i];
        mpp[arr[i]] = i;
    }
    sort(arr.begin(),arr.end());
    ll ans =0;
    for(int i = 1 ; i < 2*n;i+=2){
        ans += arr[i]-arr[i-1];
    }
    ll diff = 0;
    if(mpp[ans] != 0){
        ll idx = -1;
        if(mpp[ans].second % 2 == 0){
            idx = mpp[ans].second -1;
        }
        else idx = mpp[ans].second -2;
        diff = arr[idx]-arr[idx-1];
        diff += ans - arr[idx];
        swap(ans,arr[idx]);
    }
    ans += diff;
    arr.insert(arr.begin(),ans);
    for(int i = 0; i<= 2*n;i++){
        cout<<arr[i]<<" ";
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