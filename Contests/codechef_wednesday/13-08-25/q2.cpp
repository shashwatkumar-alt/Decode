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
    cin >> n;
    vi arr(n);
    vi freq(n + 1, 0);

    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        freq[arr[i]]++;
        if(arr[i] == 1) cnt1++;
    }

    if(cnt1 == n){
        cout << 0 << "\n";
        return;
    }

    int maxi = 0;
    for(int i = 1; i <= n; i++){
        if(freq[i] > maxi) maxi = freq[i];
    }

    int onlyIndividual = n - freq[1];
    int oneGlobal = 1 + (n - maxi);

    cout << min(onlyIndividual, oneGlobal) << "\n";
}

int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
    return 0;
}