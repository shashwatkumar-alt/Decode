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

    vector<int> a(n);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    vector<int> cnt(30, 0);

    bool ok=true;

    for(int i=0;i<n; i++) {
        for(int b = 0; b < 30; b++) {
            if(a[i] & (1 << b)) {
                cnt[b]++;

                if(cnt[b] > 1) {
                    ok = false;
                }
            }
        }
    }
    if(ok) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}