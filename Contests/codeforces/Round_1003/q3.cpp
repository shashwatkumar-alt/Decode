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
    int n,m;
    cin>>n>>m;
    vi a(n),b(m);
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    cin>>b[0];
    bool sorted = true;
    if(n==1) sorted = true;
    else{
        for(int i = 0; i<n-1;i++){
            if(a[i]<= a[i+1]) continue;
            else if(i==0){
                int temp = b[0]-a[i];
                if(temp <= a[i+1]){
                    a[i]= temp;
                }
                else{
                    sorted = false;
                    break;
                }
            }
            else if(i==n-1){
                int temp = b[0]-a[i];
                if(temp >=a[i-1]){
                    a[i]= temp;
                }
                else{
                    sorted = false;
                    break;
                }
            }
            else {
                int temp = b[0]-a[i];
                if((temp >=a[i-1])&&(temp <= a[i+1]) ){
                    a[i]= temp;
                }
                else{
                    sorted = false;
                    break;
                }
            }
        }
    }
    if(sorted) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}