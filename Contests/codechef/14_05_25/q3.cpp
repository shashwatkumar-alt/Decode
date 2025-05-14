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
    vi score(5);
    int sum = 0;
    for(int i = 0; i < 5 ; i++){
        cin>>score[i];
        sum += score[i];
    }
    if(sum >= 35) cout<<0<<endl;
    else{
        int diff = 35 - sum;
        if(diff <= 10) cout<<100<<endl;
        else if(diff <= 20) cout<<200<<endl;
        else if(diff <= 30) cout<<300<<endl;
        else if(diff <= 40) cout<<400<<endl;
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}