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
    ll X;
    cin >> N >> X;

    vector<ll> arr(N), brr(N);
    for (int i = 0; i < N; ++i) cin >> arr[i];
    for (int i = 0; i < N; ++i) cin >> brr[i];

    priority_queue<ll> pq;
    int parries = 0;

    for (int i = 0; i < N; ++i) {
        while (!pq.empty() && X < arr[i]) {
            X++;
            parries--;
            pq.pop();
        }
        if (X < arr[i]) 
            break;

        if (X >= brr[i]) {
            X--;
            parries++;
            pq.push(brr[i]);
        }
    }

    cout << parries << "\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}