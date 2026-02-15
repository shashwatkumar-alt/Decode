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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int,int> mpp(n * 2);
    for (int i = 0; i < n; i++)
        mpp[a[i]] = i;

    int count = 0;
    int start = 0;
    unordered_set<int> need(n * 2);

    while (start < n) {
        unordered_set<int> curr(n * 2);
        unordered_set<int> req(n * 2);
        int minLast = INT_MAX;
        for (int x : need)
            minLast = min(minLast, mpp[x]);

        int cnt = 0, i;
        for (i = start; i < n; i++){
            int x = a[i];
            if (need.count(x) && !req.count(x)){
                req.insert(x);
                cnt++;
            }
            if (!curr.count(x)){
                curr.insert(x);
                minLast = min(minLast, mpp[x]);
            }
            if (cnt == (int)need.size() && minLast > i){
                count++;
                start = i + 1;
                break;
            }
        }

        if (i == n){
            count++;
            break;
        }
        need = move(curr);
    }

    cout << count << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}