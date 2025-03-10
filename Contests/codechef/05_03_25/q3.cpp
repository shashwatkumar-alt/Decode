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
    int n, c;
    cin >> n >> c;
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char i : s) {
        freq[i]++;
    }

    vector<int> counts;
    for (auto it : freq) {
        counts.push_back(it.second);
    }

    sort(counts.rbegin(), counts.rend());

    int tcost = 0, ncost = 1;
    for (int j : counts) {
        for (int i = 0; i < j; i++) {
            tcost += ncost;
            ncost++;
        }
    }

    int mini = tcost;
    for (int j : counts) {
        int lcost = c;
        int temp = tcost;

        for (int i = 0; i < j; i++) {
            temp -= (--ncost);
        }

        mini = min(mini, lcost + temp);
    }

    cout << mini << endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}