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
    vi arr(n-2);
    bool equal = true;
    for(int i = 0 ; i < (n-2);i++){
        cin>>arr[i];
        if(n<=4) continue;
        else{
            if(i == 0 || i == 1) {
                continue;
            }
            else if((arr[i]==1)&&(arr[i-1]==0)&&(arr[i-2]==1)) {
                equal = false;
            }
        }
    }
    if(equal) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}