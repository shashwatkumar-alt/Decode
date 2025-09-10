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
    int N;
    cin >> N;
    int q = N / 4;
    int rem = N % 4;
    int cost = 0;

    if (rem == 0) {
        cost = q * 400;
    } 
    else if (rem == 1) {
        if (q >= 1) cost = (q - 1) * 400 + 500;
        else cost = 200;
    } 
    else if (rem == 2) {
        cost = q * 400 + 200;
    } 
    else {
        cost = q * 400 + 300;
    }
    cout << cost << '\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}