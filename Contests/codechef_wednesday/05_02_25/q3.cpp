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
    int n,x;
    cin>>n>>x;
    vi arr(n);
    vi res;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    int i = 1,count=1;
    while(i<n){
        if(arr[i-1]<=arr[i]){
            count++;
            i++;
        }
        else{
            if(arr[i-1]<= (x*arr[i])){
                count++;
                i++;
            }
            else{
                res.pb(count);
                count = 1;
            }
        }
    }
    sort(res.rbegin(),res.rend());
    cout<<res[0]<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}