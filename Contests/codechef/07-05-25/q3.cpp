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
    ll n,h;
    cin>>n>>h;
    vvll d(n,vll(3,0));
    for(int i = 0; i<n;i++){
        cin>>d[i][1]>>d[i][0];
        d[i][2]==0;
    }
    sort(d.rbegin(), d.rend());
    int time =0;
    while(h>0){
        if(d[0][2]>0){
            if(d[1][2]>0){
                if(d[2][2]>0){
                    d[2][2]--;
                }
                else{
                    time++;
                    h = h - d[2][1];
                    d[2][2] = d[2][0];
                }
                d[1][2]--;
            }
            else{
                time++;
                h = h - d[1][0];
                d[1][2] = d[1][1];
            }
            d[0][2]--;
        }
        else{
            time++;
            h = h - d[0][0];
            d[0][2] = d[0][1];
        }
    }
    cout<<++time<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}