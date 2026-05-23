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
    vi arr(n);
    for(int i = 0; i<n;i++) cin>>arr[i];
    vi ans;
    int to_multiply = 1, prev_pos = -1;
    for(int i = n-1; i>=0 ; i--){
        // if((arr[i]*to_multiply) > 0 && prev_pos != -1){
        //     ans.push_back(i+1);
        //     to_multiply *= -1;
        // }
        if((arr[i]*to_multiply)>0) prev_pos = i;
        else{
            if(prev_pos != -1){
                ans.push_back(prev_pos);
                to_multiply *= -1;
                prev_pos = i;
            }
        }
    }
    cout<<ans.size()<<'\n';
    for(int &i : ans) cout<<i<<" ";
    cout<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}