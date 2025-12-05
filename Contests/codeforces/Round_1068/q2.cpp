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
    vector<ll> a(n), b(n);
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    ll max_k = 0;
    ll min_k = 0;
    
    for(int i = 0; i < n; i++){
        ll op1 = max_k - a[i];
        ll op2 = min_k - a[i];
        
        ll op3 = b[i] - min_k; 
        ll op4 = b[i] - max_k;
        
        max_k = max({op1, op2, op3, op4});
        min_k = min({op1, op2, op3, op4});
    }
    
    cout << max_k << endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}