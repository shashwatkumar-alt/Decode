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

int palindrome(vi &arr,int x,int y){
    unordered_map<int,int>
    while()
}

void conquer(){
    int n;
    cin>>n;
    vi arr(n);
    vvi hash(2,vi(n,-1));
    for(int i = 0; i< 2*n ; i++){
        cin>>arr[i];
        if(hash[0][arr[i]-1] != -1) hash[1][arr[i]-1] = i;
        else hash[0][arr[i]-1] = i;
    }
    for(int i = 0; i<n;i++){
        int t = palindrome(arr,hash[0][i],hash[1][i]);
        if( t != -1) maxi = max(maxi,t);
    }
    cout<<maxi;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}