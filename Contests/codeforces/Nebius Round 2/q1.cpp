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
    vvi arr(n, vi(2));
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i][0];
        arr[i][1] = i;
    }
    if(n == 1) {
        cout<<1<<'\n';
        return;
    }
    else if(n == 2) {
        cout<<2<<" "<<2<<'\n';
        return;
    }
    else if( n== 3) {
        cout<<2<<" "<<2<<" "<<2<<'\n';
        return;
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i<n;i++){
        arr[i][0] = min(i+1,n-i);
    }
    arr[0][0] = 2;
    arr[n-1][0] = 2;
    sort(arr.begin(), arr.end(), [](const std::vector<int>& v1, const std::vector<int>& v2) {
        return v1[1] < v2[1];
    });
    for(int i = 0;i<n;i++) cout<<arr[i][0]<<" ";
    cout<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}