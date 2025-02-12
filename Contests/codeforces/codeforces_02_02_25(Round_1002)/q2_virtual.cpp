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
    vi arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    if(k==n){
        vi res;
        for(int i = 0; i<n;i+=2){
            res.push_back(arr[i]);
        }
        for(int i = 0; i< res.size();i++){  
            if(res[i])
        }
    }
    else{
        if(arr[1] != 1){
            cout<<1<<endl;
            return;
        }
        else if(arr[2] != 2){
            cout<<2<<endl;
            return;
        }
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}