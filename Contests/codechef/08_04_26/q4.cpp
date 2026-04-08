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
    vvi arr(n,vi(3));
    ll sum = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0; j<3;j++){
            cin>>arr[i][j];
            sum += arr[i][j];
        }
    }
    float avg = (float)sum/(float) n*3;
    int maxi = INT_MIN, mini = INT_MAX;
    for(int i = 0;i<n;i++){
        int temp = *lower_bound(arr[i].begin(),arr[i].end(),avg);
        maxi = max(maxi,temp);
        mini = min(mini,temp);
    }
    cout<<maxi-mini<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}