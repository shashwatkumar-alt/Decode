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
    vi arr(n),brr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        brr[i] = arr[i];
    }
    sort(brr.begin(),brr.end());
    unordered_map<int,bool> mpp;
    for(int i = 0;i<n;i++){
        if(i%2==0) mpp[brr[i]] = false;
        else mpp[brr[i]] = true;
    }
    for(int i = 1;i<n;i++){
        if((mpp[arr[i-1]] == true && mpp[arr[i]] == true)||(mpp[arr[i-1]] == false && mpp[arr[i]] == false)){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}