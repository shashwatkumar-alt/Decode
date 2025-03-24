#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    ll r, c, n, p;
    cin >> r >> c >> n >> p;
    
    vector<vector<ll>> in(r, vector<ll>(c));
    pair<ll,ll>idx ;
    ll ans=2;
    for (ll i = 0; i < r; i++) {
        for (ll j = 0; j < c; j++) {
            cin >> in[i][j];
            if(in[i][j]==p){
                idx = make_pair(i,j);
            }
        }
    }
    if(p==n || p ==1) ans--;
    if(r==1 && c==1){
        cout<<0<<"/"<<0<<endl;
        return 0;
    }
    if(r==1||c==1){
        cout<<ans<<"/"<<n-1<<endl;
        return 0;
    }
    vector<ll> differences;
    ll i = idx.first, j = idx.second,it=p;
    while (it--){
        ll temp;
        if (i + 1 < r && abs(in[i + 1][j] - in[i][j]) > 1 && in[i][j] != 0 && in[i + 1][j] != 0)
            differences.push_back(abs(in[i + 1][j] - in[i][j]));
        if (j + 1 < c && abs(in[i][j + 1] - in[i][j]) > 1 && in[i][j] != 0 && in[i][j + 1] != 0)
            differences.push_back(abs(in[i][j + 1] - in[i][j]));
        if (i - 1 >= 0 && abs(in[i - 1][j] - in[i][j]) > 1 && in[i][j] != 0 && in[i - 1][j] != 0)
            differences.push_back(abs(in[i - 1][j] - in[i][j]));
        if (j - 1 >= 0 && abs(in[i][j - 1] - in[i][j]) > 1 && in[i][j] != 0 && in[i][j - 1] != 0)
            differences.push_back(abs(in[i][j - 1] - in[i][j]));
        
        if((j+1)<c&&(in[i][j+1]-in[i][j])==-1){
            j++;
        }
        else if((j-1>=0)&&(in[i][j-1]-in[i][j])==-1){
            j--;
        }
        else if((i+1<r)&&(in[i+1][j]-in[i][j])==-1){
            i++;
        }
        else if((i-1>=0)&&(in[i-1][j]-in[i][j])==-1){
            i--;
        }

    }
    
    sort(differences.begin(),differences.end());
    

    for(ll i = 0;i<differences.size();i++){
        if(i>0&&differences[i]==differences[i-1])continue;
        if(((differences[i]+p)>n)&&(p-differences[i])<0) break;
        if((differences[i]+p)<=n)ans++;
        if((p-differences[i])>0)ans++;
    }
    
    cout<<ans<<"/"<<n-1<<endl;

    return 0;
}
