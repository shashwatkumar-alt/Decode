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
    cin >> n;

    vector<int> arr(n);
    unordered_map<int,int> mpp;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    int mex = 0;
    while(true){
        if(mpp[mex] == 0) break;
        mex++;
    }
    if(mex == 0){
        no;
        return;
    }

    if(mex == 1 && mpp[0] >= 2){
        no;
        return;
    }

    yes;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}