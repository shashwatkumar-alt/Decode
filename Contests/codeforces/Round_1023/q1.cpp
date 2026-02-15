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
    bool allSame = true;
    int maxi= INT_MIN,midx=0;
    for(int i =0; i<n;i++){
        cin>>arr[i];
        if(i>=1 && allSame == true && arr[i]!=arr[i-1]) allSame = false;
        if(maxi<arr[i]){
            maxi = arr[i];
            midx = i;
        }
    }
    if(allSame){
        no;
        return;
    }
    else{
        yes;
        for(int i = 0; i<n ; i++){
            if(i == midx) cout<<2<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}