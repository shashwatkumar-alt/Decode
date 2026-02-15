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
    string p, s;
    cin >> p >> s;
    int i = 0, j = 0;
    while (i < p.size() && j < s.size()) {
        if (p[i] == s[j]) {
            i++;
            j++;
        } else if (j + 1 < s.size() && s[j] == s[j + 1] && s[j] == p[i]) {
            j += 2;
            i++;
        } else {
            cout << "NO" << endl;
            return;
        }
    }
    if (i == p.size() && j == s.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}