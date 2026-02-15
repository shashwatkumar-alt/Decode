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
    cin>>n;
    vi a(n);
    vi b(n);
    vi ua;
    vi ub;
    for(int i = 0; i<n;i++){
        cin>>a[i];
        bool present = false;
        for( int j = 0 ;j<ua.size();j++){
            if(ua[j] == a[i] && present == false){
                present = true;
            }
        }
        if(present == false)  ua.pb(a[i]);
    }
    for(int i = 0; i<n;i++){
        cin>>b[i];
        bool present = false;
        for( int j = 0 ;j<ub.size();j++){
            if(ub[j] == b[i] && present == false){
                present = true;
            }
        }
        if(present == false)  ub.pb(b[i]);
    }

    if(ua.size()>2 || ub.size()> 2) yes;
    else if(ua.size()==2 && ub.size() == 2) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}