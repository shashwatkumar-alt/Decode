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
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int count = 0,maxi = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] > maxi){
            k -= maxi;
            if(k < 0) break;
            count++;
            maxi = arr[i];
        }
        else if(k >= arr[i]){
            k -= arr[i];
            count++;
        }
        else break;
    }
    cout<<count<<endl;
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