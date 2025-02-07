#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
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
    string S;
    cin>>S;
    string c={'R','B','G'};
    string f={'R','G','B'};
    string d={'B','R','G'};
    string a={'B','G','R'};
    string e={'G','B','R'};
    string b={'G','R','B'};
    int arr[6];
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 0;
    arr[3] = 0;
    arr[4] = 0;
    arr[5] = 0;
    for(int i=0;i<n;i++){
        if(S[i]!=a[i%3])arr[0] = arr[0]+1;
        if(S[i]!=b[i%3])arr[1] = arr[1]+1;
        if(S[i]!=c[i%3])arr[2] = arr[2]+1;
        if(S[i]!=d[i%3])arr[3] = arr[3]+1;
        if(S[i]!=e[i%3])arr[4] = arr[4]+1;
        if(S[i]!=f[i%3])arr[5] = arr[5]+1;
    }
    int min = arr[0];
    for(int i = 0; i<6;i++){
        if(arr[i]<min) min = arr[i];
    }
    cout<<min<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}