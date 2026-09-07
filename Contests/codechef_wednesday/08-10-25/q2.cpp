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
    string s;
    int n;
    cin>>n;
    cin>>s;
    int i = 0,j = n-1;
    while (i < n && s[i] != '1') i++; 
    while (j >= 0 && s[j] != '1') j--;    
    if (i >= n) {
        cout << 0 << endl;
        return;
    }
    int count_zeros = 0;
    if(i==n) cout<<0<<endl;
    else{
        for(int k = i+1;k<j;k++){
            if(s[k]=='0') count_zeros++;
        }
        cout<<count_zeros<<endl;
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}