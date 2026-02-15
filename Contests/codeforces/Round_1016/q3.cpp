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
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}
void conquer(){
    long long x;
    int k;
    cin >> x >> k;
    if(k == 1) {
        if(isPrime(x)) yes;
        else no;
    }
    else{
        string s = to_string(x);
        bool onlyone = true;
        for(int i = 0; i<s.size();i++){
            if(s[i] != '1') {
                onlyone = false;
                break;
            }
        }
        if(onlyone){
            int num = s.size() * k;
            if(num==2) yes;
            else no;
        }
        else no;
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}