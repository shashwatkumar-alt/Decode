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
const int MAXP = 200000;
vector<int> primes;

void sieve() {
    vector<bool> y(MAXP, true);
    y[0] = y[1] = false;

    for (int i = 2; i < MAXP; i++) {
        if (y[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j < MAXP; j += i)
                y[j] = false;
        }
    }
}
void conquer(){
    int n;
    cin >> n;

    cout << primes[0] << " ";
    for (int i = 1; i < n; i++) {
        cout << 1LL * primes[i-1] * primes[i] << " ";
    }
    cout << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    sieve();
    while(tc--){
        conquer();
    }
}