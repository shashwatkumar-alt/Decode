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

vector<vector<int>> generatePattern(int n) {
    if (n <= 0) {
        return {{0}};
    }
    if (n == 1) {
        return {{0}};
    }
    if (n == 2) {
        return {{0, 1}, {2, 3}};
    }
    vector<vector<int>> prevMatrix = generatePattern(n - 1);
    vector<vector<int>> currentMatrix(n, vector<int>(n));
    int nextNum = n * n - 1;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            currentMatrix[i + 1][j + 1] = prevMatrix[i][j];
        }
    }
    for (int j = 0; j < n; ++j) {
        currentMatrix[0][j] = nextNum--;
    }
    for (int i = 1; i < n; ++i) {
        currentMatrix[i][0] = nextNum--;
    }

    return currentMatrix;
}

void conquer(){
    int n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    vector<vector<int>> result = generatePattern(n);
    for (int i = 0;i<n;i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}