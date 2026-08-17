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
    ll n,m;
    cin>>n>>m;
    vll a(n+2), b(m+2);
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=m;i++) cin>>b[i];

    ll i=1,j=1;
    ll a_cur=a[1], b_cur=b[1];
    ll win=0;

    while(true){
        ll RA = (i<n) ? (a_cur - a[i+1] + 2) : (a_cur + 1);
        ll RB = (j<m) ? (b_cur - b[j+1] + 1) : (b_cur);
        ll R = min(RA,RB);

        if(RA<=RB){
            a_cur -= (R-1);
            b_cur -= R;
            if(i==n){ win=2; break; }
            i++; a_cur = a[i];
            a_cur -= 1;
            if(RB<=RA){
                if(j==m){ win=1; break; }
                j++; b_cur = b[j];
            }
        } else {
            a_cur -= (R-1);
            b_cur -= R;
            a_cur -= 1;
            if(j==m){ win=1; break; }
            j++; b_cur = b[j];
        }
    }
    cout<<win<<"\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}