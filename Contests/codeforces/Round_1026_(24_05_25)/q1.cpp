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
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
     int count = n;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if((arr[i] + arr[j]) % 2 == 0){
                int temp = i + (n - j - 1);
                count = min(count, temp);
            }
        }
    }

    cout << count << endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}