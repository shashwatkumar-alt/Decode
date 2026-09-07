#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
static const bool fastIO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
void conquer(){
    int m,k;
    cin>>m>>k;
    string S;
    cin>>S;
    int scount = 0,pcount=0;
    for(auto i : S){
        if(i == 'S') {
            scount++;
        }
        else {
            pcount++;
        }
    }
    if(scount>=k) cout<<m<<endl;
    else cout<< k+(pcount-1)<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}