#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<vector<ll>> vvll;
typedef pair<int, int> pi;
typedef vector<vector<char>> vvc;
typedef vector<vector<int>> vvi;
typedef pair<ll, ll> pll;
static const bool fastIO = []()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
void conquer()
{
    int n;
    cin >> n;
    vi arr(n);
    int last_missing = -1, last_one = -1;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] == 1) last_one = i;
        else if(arr[i] == -1){
            if(last_one == -1) {
                arr[i] = 1;
                last_one = i;
            }
            else arr[i] = 0;
            last_missing = i;
        }
    }
    if(last_one < last_missing) arr[last_missing] = 1;
    for(int i = 0; i<n;i++) cout<<arr[i]<<" ";
    cout<<'\n';
}
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        conquer();
    }
}