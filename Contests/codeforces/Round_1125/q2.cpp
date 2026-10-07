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
    string s;
    cin>>n;
    cin>>s;
    vector<int> st;
    vector<bool>printed (n+1,false);

    int curr = 1;

    for(int i=1; i<= n;i++){

        if(s[i-1] == '1'){
            st.push_back(curr);
            curr++;
        }

        else if(s[i-1] =='2'){

            if(!st.empty()){
                int temp = st.back();
                st.pop_back();
                printed[temp] = true;
            }
        }

        else{

            printed[i] = true;
        }
    }

    int ans = 0;

    for(int i = 1; i <= n; i++){
        if(!printed[i]){
            ans++;
        }
    }

    cout<<ans<<endl;

    for(int i = 1; i <= n; i++){
        if(!printed[i]){
            cout<<i<<" ";
        }
    }

    cout<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}