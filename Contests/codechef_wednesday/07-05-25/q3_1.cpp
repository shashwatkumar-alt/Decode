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
    ll n,h;
    cin>>n>>h;
    vvll d(n,vll(2));
    for(int i =0 ; i<n;i++){
        cin>>d[i][1]>>d[i][0];
    }
    sort(d.begin(),d.end());
    int maxlimit = h/d[0][1];
    vll time(maxlimit,-1);
    int i = 0;
    while(i<maxlimit){
        time[i] = d[0][0];
        i += d[0][1];
    }
    i=1;
    while(i<maxlimit){
        if(time[i] == -1){
            time[i] = d[1][0];
            i += d[1][1]; 
        }
        else i++;
    }
    i=2;
    while(i<maxlimit){
        if(time[i] == -1){
            time[i] = d[2][0];
            i += d[2][1]; 
        }
        else i++;
    }
    for(int i = 0; i<maxlimit;i++)
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}