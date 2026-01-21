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
int bsearch(const vi& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int idx = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] <= target){
            idx = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return idx;
}

void conquer(){
    int n, m;
    cin >> n >> m;

    vi a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll count = 0;

    for(int i = 0; i < n; i++){
        int idx = bsearch(b, a[i] - 1);
        count += (idx + 1);
    }

    cout << count << endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}