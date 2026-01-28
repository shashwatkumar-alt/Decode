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
bool present(vvi& a, int target){
    for(int i = 0; i<a.size();i++){
        if(a[i][0] == target) {
            a[i][1]++;
            return true;
        }
    }
    return false;
}
void conquer(){
    int n;
    cin>>n;
    vi arr(n);
    vvi a;
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
        if(a.empty() || present(a,arr[i]) == false){
            a.push_back({arr[i],0});
        }
    }
    if(a.size()>2){
        cout<<"NO"<<endl;
        return;
    }
    else if(a.size()==1){
        cout<<"YES"<<endl;
        return;
    }
    else{
        if(n%2==0 && a[0][1] == a[1][1]) cout<<"YES"<<endl;
        else if(n%2==1 && (a[0][1] == a[1][1]+1 || a[0][1] == a[1][1]-1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}