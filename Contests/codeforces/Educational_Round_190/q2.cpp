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
    string s;
    cin>>s;
    int n = s.size();
    for(int i = 0; i<s.size();i++){
        if(s[i]=='4'){
            s.erase(s.begin()+i);
            i--;
        }
    }
    int one = -1, three = -1,two = -1;
    if(s.find('1') != s.end()) one = distance(s.begin(),s.find('1'));
    if(s.find('3') != s.end()) three = distance(s.begin(),s.find('3'));
    for(int i = s.size()-1)
    if(one != -1 && three != -1){
        int mini = min(one,three);
        for()
    }
    else if(one == -1 && three != -1){

    }


    cout<<(n-s.size())<<'\n';
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}