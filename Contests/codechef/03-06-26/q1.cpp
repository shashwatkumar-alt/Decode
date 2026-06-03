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
    bool even_present = false, odd_present = false;
    ll sum = 0;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        sum += arr[i];
        if(!even_present && arr[i] % 2 == 0) even_present = true;
        else if(!odd_present && arr[i] % 2 == 1) odd_present = true;
    }
    if(sum % 2 == 0){
        if(even_present) yes;
        else no;
    }
    else{
        if(odd_present) yes;
        else no;
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}