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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll countd = 0,countu = 0,c=0;
    if(n>=3){
        for(ll i = 0; i<n;i++){
            if(s[i]=='-') countd++;
            else if(s[i]=='_') countu++;
        }
        if((countd % 2== 0)&&(countd >=2)){
            c = (countd/2 * countd/2)*countu;
        }
        else if((countd % 2!= 0)&&(countd >=2)){
            c = (countd/2 * (countd/2 + 1))*countu;
        }
    }
    cout<<c<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}