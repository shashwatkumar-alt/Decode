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
    // int n;
    // cin>>n;
    // string s;
    // cin>>s;
    // vector<bool> utilized(n,true);
    // for(int i = 0; i<n;i++){
    //     if(s[i]==1) utilized[i]= false;
    // }
    // for (int i = 0; i < n; i++) {
    //     if (s[i] == '0') { 
    //         bool utilized = false;
    //         if (i > 0 && s[i - 1] == '1' && !utilized[i - 1]) {
    //             utilized[i - 1] = true;
    //             utilized = true;
    //         }
    //         else if (i < n - 1 && s[i + 1] == '1' && !utilized[i + 1]) {
    //             utilized[i + 1] = true;
    //             utilized = true;
    //         }
    //         if (!utilized) {
    //             no;
    //             return;
    //         }
    //     }
    // }

    // yes;
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<bool> used(n, false);

    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            bool utilized = false;
            if (i > 0 && s[i - 1] == '1' && !used[i - 1]) {
                used[i - 1] = true; 
                utilized = true;
            }
            else if (i < n - 1 && s[i + 1] == '1' && !used[i + 1]) {
                used[i + 1] = true;
                utilized = true;
            }

            if (!utilized) {
                no;
                return;
            }
        }
    }

    yes;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}