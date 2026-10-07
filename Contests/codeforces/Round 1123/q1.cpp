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
    string c;
    string s;
    cin>>n;
    cin>>c;
    cin>>s;
    int i = 0, j = n-1, coins = 0;
    while(i<j){
        if(s[i] == s[j]){}
        else if(s[i] == c[0] || s[j] == c[0]) coins ++;
        else coins += 2;
        i++;
        j--;
    }
    cout<<coins<<"\n";
    
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}