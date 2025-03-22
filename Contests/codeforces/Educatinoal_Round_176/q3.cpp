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
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    vector<long long> prefix(m + 1, 0);
    for (int i = 0; i < m; i++)
        prefix[i + 1] = prefix[i] + a[i];
    
    long long total = 0;
    for (int j = 0; j < m; j++) {
        int y = a[j];
        long long sum = 0;
        if (y >= n) {
            int pos = lower_bound(a.begin(), a.end(), n) - a.begin();
            sum += prefix[pos] + (long long)(m - pos) * (n - 1);
        } else {
            int low = lower_bound(a.begin(), a.end(), n - y) - a.begin();
            int high = lower_bound(a.begin(), a.end(), n) - a.begin();
            int count = high - low;
            if (count > 0) {
                long long groupSum = prefix[high] - prefix[low];
                sum += groupSum - (long long)(n - y) * count + count;
            }
            sum += (long long)(m - high) * y;
        }
        total += sum;
    }
    
    for (int j = 0; j < m; j++) {
        int y = a[j], self = 0;
        if (y >= n)
            self = n - 1;
        else if (2 * y >= n)
            self = 2 * y - n + 1;
        total -= self;
    }

    cout << total << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}