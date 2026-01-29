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
    vi b(n),a;
    for(int i = 0 ; i < n; i++){
        cin>>b[i];
    }
    a.push_back(b[0]);
    for(int i = 1 ; i < n ; i++){
        if(b[i-1]>b[i]){
            a.push_back(b[i]);
        }
        a.push_back(b[i]);
    }
    n = a.size();
    cout<<n<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}