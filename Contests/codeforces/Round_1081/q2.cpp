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

void flip(string &s, int idx, int n){
    for(int i = 0;i<n;i++){
        if(i == idx ) continue;
        if(s[i]==0) s[i] = '1';
        else s[i]=='0';
    }
    return;
}
void conquer(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> one, zero;

    for(int i = 0; i < n; i++){
        if(s[i] == '1') one.push_back(i+1);
        else zero.push_back(i+1);
    }
    
    if(one.size() % 2 == 0){
        cout << one.size() << "\n";
        for(int x : one) cout << x << " ";
        cout << "\n";
        return;
    }
    if(zero.size() % 2 == 1){
        cout << zero.size() << "\n";
        for(int x : zero) cout << x << " ";
        cout << "\n";
        return;
    }
    cout << -1 << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}