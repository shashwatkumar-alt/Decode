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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    for (int i = 0; i <= n - k; i++) {
        long long sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += a[j];
        }
        sum += a[n - 1];
        ans = max(ans, sum);
        sum = 0;
        for (int j = i; j < i + k - 1; j++) {
            sum += a[j];
        }
        sum += a[0];
        ans = max(ans, sum);
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