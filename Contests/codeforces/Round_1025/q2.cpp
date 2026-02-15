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
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    pi rows = make_pair(0,n);
    pi cols = make_pair(0,m);
    int count = 0;
    while(rows.second-rows.first > 1 && cols.second-cols.first > 1){
        // vi diff(4);
        int r_before = a-1;
        int maxi = r_before,midx = 0;
        int r_after = n-a+1;
        if(maxi<r_after){
            maxi = r_after;
            midx = 1;
        }
        int c_before = b-1;
        if(maxi<c_before){
            maxi = c_before;
            midx = 2;
        }
        int c_after = n-b+1;
        if(maxi<c_after){
            maxi = c_after;
            midx = 3;
        }
        // diff.push_back(r_before);
        // diff.push_back(r_after);
        // diff.push_back(c_before);
        // diff.push_back(c_after);
        if(midx == 0) {
            rows.first = a-1;
            a = a + (r_after/2);
        }
        else if(midx == 1){
            rows.second = a+1;
            a = a - (r_before/2);
        }
        else if(midx == 2) {
            cols.first = b-1;
            b = b + (c_after/2);
        }
        else if(midx == 3) {
            cols.second = b+1;
            b = b - (c_before/2);
        }
        count++;
    }
    cout<<count<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}