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
    string str;
    cin>>str;
    int count0 = 0,count1=0;
    for(int i = 0; i<n;i++){
        if(str[i]=='0') count0++;
        else count1++;
    }
    // int m0 = count0/2,m1 = count1/2;
    // if((n/2 == k) && (m1+m0 != k)) no;
    // else if(m0 +m1 > k) no;
    // else yes;
    int half = n / 2;
    int bad = half - k;
    if (bad < 0 || bad > min(count0, count1)) {
        no;
        return;
    }
    int rem0 = count0 - bad;
    int rem1 = count1 - bad;
    int isit = rem0/2 + rem1/2;
    isit >= k ?yes:no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}