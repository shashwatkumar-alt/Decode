#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector <int> arr(n);
        for(int i =0; i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.begin()+(l-2));
        sort(arr.begin()+(l-1),arr.begin()+(r-1));
        sort(arr.begin()+(r),arr.begin()+(n-1));
        for(int i = 0; i<n;i++){
            cout<<arr[i]<<" ";
        }
        if (l==1){
            int mini = min(r-1,n-1-r);
            for(int i = 0;i<= mini;i++){
                if(arr[r-i-1]>arr[i+r]){
                    swap(arr[r-i-1],arr[i+r]);
                }
            }
        }
        else if(r==n){
            int mini = min(l-1,l-r);
            for(int i = 0;i<= mini;i++){
                if(arr[n-i]>arr[i]){
                    swap(arr[n-i],arr[i]);
                }
            }
        }
        else{
            
        }
        int sum = 0;
        for(int i= l-1;i<=r-1;i++){
            sum += arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}