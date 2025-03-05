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
int main(){
    int r,c;
    cin>>r>>c;
    vvc arr(r,vc(c));
    vi count(r+c,0);
    vector<vector <pair<int, int>>> co(r,vector<pair<int,int>>(c));
    for(int i = 0;i<=r;i++){
        for(int j = 0;j<=c;j++){
            cin>>arr[i][j];
            if(arr[i][j]==46){
                cout<<"Entered if\t";
                count[i]++;
                cout<<count[i]<<" ";
                count[r+j]++;
                cout<<count[r+j]<<" ";
                co[count[i]][count[r+j]] = make_pair(i,j);
                cout<<co[count[i]][count[r+j]].first<<" "<<co[count[i]][count[r+j]].second<<endl;
            }
        }
    }
    for(int i = 0;i<r;i++){
        for(int j = 0; j<c;j++){
            cout<<co[i][j].first<<" "<<co[i][j].second;
        }
        cout<<endl;
    }
}