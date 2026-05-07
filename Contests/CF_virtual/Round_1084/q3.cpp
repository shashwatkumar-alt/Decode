// #include<bits/stdc++.h>
// using namespace std;
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// typedef long long ll;
// typedef vector<int> vi;
// #define pb push_back
// typedef vector<ll> vll;
// typedef vector<char> vc;
// typedef vector<vector<ll>> vvll;
// typedef pair<int,int> pi;
// typedef vector<vector<char>> vvc;
// typedef vector<vector<int>> vvi;
// typedef pair<ll,ll> pll;
// static const bool fastIO = [](){
//     std::ios_base::sync_with_stdio(false);
//     std::cout.tie(nullptr);
//     std::cin.tie(nullptr);
//     return true;
// }();

// void recurse(string &s, int x,int y, int n){
//     if(x<0 || y>=n) return;
//     if(s[x] == s[y]){
//         s[x] = '*';
//         s[y] = '*';
//     }
//     else return;
//     return recurse(s,x-1,y+1,n);
// }

// void conquer(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     if(n == 1) {
//         no;
//         return;
//     }
//     vector<pi> ans;
//     for(int i = 1; i<n;i++){
//         if(s[i] == s[i-1]){
//             s[i-1] = '*';
//             s[i] = '*';
//         }
//     }
//     int start = -1;
//     for(int i = 0; i<n;i++){
//         if(s[i] == '*'){
//             start = i;
//             while(s[i] == '*' && i < n) i++;
//             ans.push_back({start,i-1});
//         }
//     }
//     for(auto &p : ans){
//         recurse(s,p.first-1,p.second+1,n);
//     }
//     for(int i = 0; i<n;i++){
//         if(s[i] != '*'){
//             no;
//             return;
//         }
//     }
//     yes;
// }
// int main(){
//     ll tc;
//     cin>>tc;
//     while(tc--){
//         conquer();
//     }
// }

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
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i = 0; i<n;i++) mp[s[i]]++;
    for(auto &i : mp){
        if(i.second % 2 == 1){
            no;
            return;
        }
    }
    yes;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}