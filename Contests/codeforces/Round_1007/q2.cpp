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
    ll summ = n*(n+1)/2;
    double sq = sqrt(summ);
    if(ceil(sq)==sq){
        cout<<-1<<endl;
        return;
    }
    vll ans(n);
    summ = 0;
    for(ll i = 1; i<=n;i++){
        summ += i;
        sq  = sqrt(summ);
        if(ceil(sq)==sq){
            ans[i-1]=i+1;
            i++;
            ans[i-1]= i-1;
            summ += i;
        }
        else ans[i-1]=i;

    }
    for(ll i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}