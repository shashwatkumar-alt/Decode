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
    if(n==2) {
        cout<<1<<" "<<2<<endl;
        return;
    }
    vector<int> p;
    int mid = (n + 1) / 2;
    p.push_back(mid);
    p.push_back(mid-1);
    for(int i = 1; i<=n/2;i++){
        p.push_back(mid - i);
        p.push_back(mid + i);
    }
    p.erase(p.begin()+n,p.end());
    
    for (int x : p) cout << x << " ";
    cout << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}