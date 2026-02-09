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
    vi a(n),b,c;
    cin>>a[0];
    bool allSame = true;
    for(int i = 1 ; i < n ; i++){
        cin>>a[i];
        if(allSame == true && a[i-1] != a[i]) allSame = false;
    }
    if(allSame) {
        cout<<-1<<endl;
        return;
    }
    sort(a.begin(),a.end());
    c.push_back(a[n-1]);
    int i;
    for(i = n-2; i>= 0;i--){
        if(a[i] == a[i+1]) c.push_back(a[i]);
        else break;
    }
    for(int j = i; j>=0;j--) b.push_back(a[j]);
    cout<<b.size()<<" "<<c.size()<<endl;
    for(i = 0;i<b.size();i++) cout<<b[i]<<" ";
    cout<<endl;
    for(i = 0;i<c.size();i++) cout<<c[i]<<" ";
    cout<<endl;

}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}