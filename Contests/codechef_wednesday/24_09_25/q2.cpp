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
    int x,y;
    cin>>x>>y;
    int score = 0;
    while(x > 0 || y > 0){
        if(x==0 && y >=3){
            score += (2*(y/3));
            y =0;
        }
        else if(x>=3 && y == 0){
            score += (x/3);
            x = 0;
        }
        else if(x>=2 && y>=1){
            score += 2;
            x -= 2;
            y --;
        }
        else if(x==1 && y >=2) {
            score += 2;
            x--;
            y-=2;
        }
        else break;
    }
    cout<<score<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}