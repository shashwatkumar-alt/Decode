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
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }   
    if((maxi- mini)%2 == 0){
        cout<<(maxi-mini)/2;
    }
    else{
        cout<<(maxi-mini)/2 +1;
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