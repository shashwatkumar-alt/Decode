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

bool con(char s){
    return (s != 'a' && s != 'e' && s != 'i' && s != 'o' && s != 'u');
}

void conquer(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool cons = false;
    int count = 0, mcount = 0;
    for(char &c : s){
        if(con(c)){
            count++;
            mcount = max(mcount,count);
        }
        else count = 0;
    }
    if(mcount >= 4) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}