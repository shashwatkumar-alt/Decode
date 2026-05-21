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

    vi arr(n), small;
    cin>>arr[0];
    for(int i = 1; i < n; i++) {
        cin>>arr[i];
        if(arr[i-1]>arr[i]) small.push_back(i);
    }
    if( small.size() <= 1 ) {
        yes;
        return;
    }
    int mini = arr[small[0]-1] - arr[small[0]];
    int maxi = arr[small[1]-1] - arr[small[1]-2];
    if(mini > maxi){
        no;
        return;
    }
    bool broke = false;
    int s = small.size();
    for( int i = 2 ; i < s ; i++){
        mini = min( mini , arr[small[i-1]-1] - arr[small[i-1]]);
        maxi = min( maxi , arr[small[i]-1] - arr[small[i]-2]);
        if(mini > maxi){
            broke = true;
            break;
        }
    }
    if(broke) {
        no;
        return;
    }
    if(small[s-1] < n-1){
        
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}