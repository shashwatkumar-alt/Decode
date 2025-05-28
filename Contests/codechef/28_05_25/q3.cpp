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
    vi arr(n);
    int c0 = 0,c1 = 0, c2 = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%3 == 0) c0++;
        else if(arr[i]%3 == 1) c1++;
        else if(arr[i]%3 == 2) c2++;
    }
    if(c0 != 0) yes;
    else if(c1 != 0 && c2 != 0) yes;
    else if((c1 >= 3 && c1 != 0) || (c2 >= 3 && c2 != 0)) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}