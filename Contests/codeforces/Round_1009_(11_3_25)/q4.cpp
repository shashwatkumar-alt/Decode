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
    vector<int> x(n), y(n);
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }
    
    auto it = find(x.begin(), x.end(), y[0]);
    int pv = (it != x.end()) ? distance(x.begin(), it) : -1;
    
    for (int i = 0; i < n - 1; i++) {
        if (abs(y[i] - x[pv]) > abs(y[i + 1] - x[pv]) || 
            (abs(y[i] - x[pv]) == abs(y[i + 1] - x[pv]) && y[i] > y[i + 1])) {
            pv = -2;
            break;
        }
    }
    cout << pv + 1 << endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}