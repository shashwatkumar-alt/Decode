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
    vi arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int pos = -1;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] != i+1){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        cout << 0 << endl;
        return;
    }
    int ans = INT_MAX;
    for(int i = pos; i < n; i++){
        ans = min(ans, arr[i]);
    }
    cout << ans << endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}