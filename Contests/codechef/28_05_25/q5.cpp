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

    vvll arr(n, vll(3, 0));

    for (int i = 0; i < n; ++i) {
        cin >> arr[i][0];
    }

    for (int i = 0; i < n; ++i) {
        cin >> arr[i][1];
        arr[i][2] = i;
    }

    sort(arr.begin(), arr.end(),
         [](const vll &A, const vll &B){
             return A[0] < B[0];
         });

    vll ans(n, 0);
    priority_queue<ll, vll, greater<ll>> pq;
    ll sum = 0;

    for (int i = 0; i < n; ++i) {
        ll coins = arr[i][1];
        int idx = arr[i][2];
        ans[idx] = sum;
        pq.push(coins);
        sum += coins;
        if ((int)pq.size() > k) {
            sum -= pq.top();
            pq.pop();
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << (i + 1 < n ? ' ' : '\n');
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}