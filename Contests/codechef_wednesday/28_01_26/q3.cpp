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
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    vector<vector<int>> dp(N+1, vector<int>(N+2, -1));
    dp[0][0] = 0;

    for(int i = 0; i < N; i++){
        for(int x = 0; x <= N; x++){
            if(dp[i][x] == -1) continue;

            dp[i+1][x] = max(dp[i+1][x], dp[i][x]);

            int a = A[i];

            if(a == 1 || x >= a-1){
                int nx = max(x, a);
                dp[i+1][nx] = max(dp[i+1][nx], dp[i][x] + 1);
            }
        }
    }
    int ans = 0;
    for(int x = 0; x <= N; x++){
        ans = max(ans, dp[N][x]);
    }

    cout << ans << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}