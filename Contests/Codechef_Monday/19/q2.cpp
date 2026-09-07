#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,k;
    cin>>n>>k;
    k *= 2;
    vector<int> arr(n);
    long long sum = 0;
    for(int i = 0; i<n;i++) {
        cin>>arr[i];
        if(i % 2 == 0 && arr[i] > k) sum += arr[i];
    }
    cout<<sum;
    return 0;
}