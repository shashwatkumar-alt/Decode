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
    int x;
    cin>>x;
    int msb = 1;
    while (msb <= x) {
        msb <<= 1;
    }
    msb >>= 1;

    int y1 = msb - 1;
    int z = x ^ y1;
    if ((x + y1 > z) && (x + z > y1) && (y1 + z > x)) {
        cout << y1 << endl;
        return;
    }

    int y2 = y1 - 1;
    z = x ^ y2;
    if ((x + y2 > z) && (x + z > y2) && (y2 + z > x)) {
        cout << y2 << endl;
        return;
    }

    cout << -1 << endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}