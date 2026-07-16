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
    string s;
    cin>>s;
    if((k-1) >= (n-k)){
        cout<<-1<<'\n';
    }
    else{
        int count = 0;
        for(int i = 0; i < k; i++){
            if(s[i] == 'L')count++;
        }
        for(int i = n-1; i >= (n-k); i--){
            if(s[i] == 'R')count++;
        }
        cout<<count<<'\n';
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}