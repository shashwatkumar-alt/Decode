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
    int n,k;
    cin>>n>>k;
    vi arr(n),pos;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) pos.push_back(i+1);
    }
    int sz = pos.size();
    if(pos.empty()) no;
    else if(pos[0]-1>k || (n-1-pos[sz-1])>k) no;
    else{
        bool ye = true;
        for(int i = 1; i<sz;i++){
            if(pos[i]-pos[i-1]<=k) {
                ye = false;
                break;
            }
        }
        if(ye) yes;
        else no;
    }

}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}