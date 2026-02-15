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
    
    string T = "01032025";
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    unordered_map<char, int> req;
    for (char c : T) 
        req[c]++;

    unordered_map<char, int> cnt;
    
    for (int i = 0; i < n; i++) {
        char c = '0' + arr[i];
        cnt[c]++;

        bool ok = true;
        for (char ch : T) {
            if (cnt[ch] < req[ch]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << (i + 1) << "\n";
            return;
        }
    }

    cout << "0\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}