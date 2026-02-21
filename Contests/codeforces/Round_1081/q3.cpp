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
    ll h,k;
    cin>>n>>h>>k;

    vector<ll> a(n);
    ll total=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }

    ll times = (h-1)/total;

    ll time = times*(n+k);
    ll remaining = h - times*total;

    vector<ll> suffix(n);
    suffix[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--) suffix[i]=max(a[i],suffix[i+1]);

    ll prefix=0;
    ll bestTime=LLONG_MAX;

    for(int i=0;i<n;i++){

        prefix+=a[i];
        if(prefix>=remaining){
            bestTime=min(bestTime,time+i+1);
        }

        if(i<n-1){
            ll improved = prefix - a[i] + suffix[i+1];
            if(improved>=remaining){
                bestTime=min(bestTime,time+i+1);
            }
        }
    }

    cout<<bestTime<<"\n";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}