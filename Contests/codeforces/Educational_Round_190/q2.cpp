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
    for(int i = 1; i < s.size(); i++){
        if(s[i]=='2' && (s[i-1] == '1' || s[i-1] == '3')){
            int ot_count = 0,t_count = 0,c = i-1;
            while(c>=0 && (s[c] == '3' || s[c] == '1')) {
                ot_count++;
                c--;
            }
            while(i<s.size() && s[i] == '2') {
                t_count++;
                i++;
            }
            if(ot_count < t_count){
                s.erase(s.begin()+(i-ot_count),s.begin()+i);
            }
            else s.erase(s.begin()+i,s.begin()+(i+t_count));
            i--;
        }
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