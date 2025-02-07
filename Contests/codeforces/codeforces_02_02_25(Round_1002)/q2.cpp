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
    int n,k;
    cin>>n>>k;
    vi arr(n);
    vvi a(k);
    vi b;
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    int part = n / k;
    int ext = n % k;

    int idx = 0;
    for (int i = 0; i < k; i++) {
        int curr = part + (ext > 0 ? 1 : 0);
        ext--;

        for (int j = 0; j < curr; j++) {
            a[i].pb(arr[idx]);
            if (i % 2 == 1) {
                b.push_back(arr[idx]);
            }
            idx++;
        }
    }
    b.pb(0);
    sort(b.begin(),b.end());
    for(int i = 0; i<b.size();i++){
        if(b[i] != i){
            cout<<i<<endl;
            return;
        }
    }
    cout<<b.size()<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
    return 0;
}