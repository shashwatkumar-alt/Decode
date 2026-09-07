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
    if(x == 0) {
        for(int i = 0 ; i <y ;i++){
            cout<<2;
        }
        cout<<endl;
    }
    else if(x == 2){
        cout<<1;
        for(int i = 0 ; i <y ;i++){
            cout<<2;
        }
        cout<<1<<endl;
    }
    else if(x == 4){
        cout<<11;
        for(int i = 0 ; i <y ;i++){
            cout<<2;
        }
        cout<<11<<endl;
    }
    else if(x == 6){
        cout<<111;
        for(int i = 0 ; i <y ;i++){
            cout<<2;
        }
        cout<<111<<endl;
    }
    else if(x == 8){
        cout<<1111;
        for(int i = 0 ; i <y ;i++){
            cout<<2;
        }
        cout<<1111<<endl;
    }
    else if(x == 10){
        cout<<11111;
        for(int i = 0 ; i <y ;i++){
            cout<<2;
        }
        cout<<11111<<endl;
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}