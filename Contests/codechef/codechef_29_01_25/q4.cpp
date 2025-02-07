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
    string S;
    cin>>S;
    int sum = 0;
    if(n%3 == 0){
        int rcount= 0, gcount = 0, bcount = 0;
        for(auto i : S){
            if(i == 'R') rcount++;
            else if ( i == 'G') gcount++;
            else bcount++;
        }
        
    }
    else if(n%3==1){

    }
    else{

    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}