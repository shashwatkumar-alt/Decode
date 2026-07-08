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
    cin >> n;
    vi a(n+1);
    vi one_score(n+1), three_Score(n+1);

    for(int i = 1; i <= n; i++){
        cin >> a[i];

        if(a[i] == 1){
            one_score[i] = one_score[i-1] + 1;
        }
        else{
            one_score[i] = one_score[i-1] - 1;
        }

        if(a[i] != 3){
            three_Score[i] = three_Score[i-1] + 1;
        }
        else{
            three_Score[i] = three_Score[i-1] - 1;
        }
    }

    vi sufMax(n + 2, INT_MIN);
    for(int i = n - 1; i >= 1; i--){
        if(three_Score[i] > sufMax[i+1]){
            sufMax[i] = three_Score[i];
        }
        else{
            sufMax[i] = sufMax[i+1];
        }
    }

    bool found = false;
    for(int i = 1; i <= n - 2; i++){
        if(one_score[i] >= 0 && sufMax[i+1] >= three_Score[i]){
            found = true;
            break;
        }
    }

    if(found) yes;
    else no;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}