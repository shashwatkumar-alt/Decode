#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector <int> arr(n);
        for(int i = 0; i<n;i++){
            cin>>arr[i];
        }
        int sum = 0;
        for(int i = 0; i<n;i++){
            sum += arr[i];
        }
        float max = (float)sum/x;
        int max1 = ceil(max);
        cout<<max1<<endl;
    }
    return 0;
}