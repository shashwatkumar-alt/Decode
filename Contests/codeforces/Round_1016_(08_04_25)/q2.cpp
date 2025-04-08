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
    string n;
    cin >> n;
    int count = 0;
    int zcount = 0;
    bool crossed = false;
    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '0' && !crossed) {
            zcount++;
        } else if (n[i] != '0') {
            crossed = true;
            count++;
        }
    }
    cout << count+zcount-1<< endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}