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

    vll arr(n);
    ll sum =0;

    bool in=false;
    bool one = false;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];

        if (arr[i] >= 2) {
            one =true;

            if (i > 0 && i < n - 1) {
                in = true;
            }
        }
    }

    if (!one) {
        cout << -1 <<'\n';
    }
    else if (in) {
        cout << sum-1 <<'\n';
    }
    else {
        cout <<sum- (n-1) <<'\n';
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}