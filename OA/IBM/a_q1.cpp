#include <bits/stdc++.h>
using namespace std;

// vector<int> detectHighLoadWindows(vector<int> loads, int windowSize, int threshold) {
//     int n=loads.size();
//     vector<int> res;
//     long long sum=0;
//     for(int i=0;i<n;i++){
//         sum+=loads[i];
//         if(i>=windowSize) sum-=loads[i-windowSize];
//         if(i>=windowSize-1){
//             if(sum>1LL*threshold*windowSize) res.push_back(i);
//         }
//     }
//     return res;
// }


vector<int> detectHighLoadWindows(vector<int> loads, int windowSize, int threshold) {
    int n = loads.size();
    vector<int> res;
    if (windowSize > n) return res;
    int sum = 0;
    for (int i = 0; i < windowSize; ++i) sum += loads[i];
    if (sum / windowSize > threshold) res.push_back(windowSize - 1);
    for (int i = windowSize; i < n; ++i) {
        sum += loads[i] - loads[i - windowSize];
        if (sum / windowSize > threshold) res.push_back(i);
    }
    return res;
}

int main(){
    int n,windowSize,threshold;
    cin>>n>>windowSize>>threshold;
    vector<int> loads(n);
    for(int i=0;i<n;i++) cin>>loads[i];
    vector<int> ans=detectHighLoadWindows(loads,windowSize,threshold);
    for(int x:ans) cout<<x<<" ";
}
