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
    int n,k;
    cin>>n>>k;
    vi arr(n);
    ll sum = 0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        sum += arr[i];
        if(arr[i]<mini) mini = arr[i];
        if(arr[i]>maxi) maxi = arr[i];
    } 
    int mcount = 0;
    for(int i = 0 ;i<n;i++){
        if(arr[i]==maxi) mcount++;
    }
    if((maxi - mini > k + 1) || (sum % 2 == 0) || ((maxi - mini == k + 1) && mcount > 1)){
        cout << "Jerry" << endl;
    } else {
        cout << "Tom" << endl;
    }
    
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}