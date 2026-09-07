#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

static const bool fastIO = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return true;
}();


void conquer(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    vector<int> A(n+1);

    for(int i=0; i<n; i++){
        cin >> v[i].first;
        v[i].second = i + 1;
        A[i+1] = v[i].first;
    }

    sort(v.begin(), v.end());

    vector<int> P(n+1);

    for(int i=0; i<n; i++){
        int cur = v[i].second;
        int nxt = v[(i+1)%n].second;
        P[cur] = nxt;
    }

    int score = 0;
    for(int i=1; i<=n; i++){
        if(A[P[i]] <= A[i]) score++;
    }

    cout << score << "\n";
    for(int i=1; i<=n; i++){
        cout << P[i] << " ";
    }
    cout << "\n";
}

int main(){
    ll tc;
    cin >> tc;
    while(tc--){
        conquer();
    }
}
