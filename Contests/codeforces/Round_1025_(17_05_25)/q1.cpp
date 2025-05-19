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
    vector<int> arr(n);
    bool alltrue = true,flag=true;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        if(arr[i]== 0) alltrue = false;
        if(i>0 && arr[i]==0 && arr[i-1]==0) flag = false;
        // cout<<i<<" "<<arr[i]<<" "<<alltrue<<" "<<flag<<endl;
    }
    if(alltrue) yes;
    else if(flag == false) yes;
    else no;
    return; 
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}