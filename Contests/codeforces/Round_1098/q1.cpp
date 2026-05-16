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
void conquer() {
    int n;
    cin >> n;

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x == 0) cnt0++;
        else if(x == 1) cnt1++;
        else cnt2++;
    }

    int ans = cnt0;

    int pairs = min(cnt1, cnt2);

    ans += pairs;

    cnt1 -= pairs;
    cnt2 -= pairs;

    ans += cnt1 / 3;
    ans += cnt2 / 3;

    cout << ans << '\n';
}

int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}