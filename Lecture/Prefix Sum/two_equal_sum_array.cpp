// Check if array can be partitioned into 2 contingous array of equal sum.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    cout<<"Enter the number of elements in the array: ";
    int n;
    cin>>n;
    cout<<"Enter elements :\n";
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> pre(n);
    pre[0]= arr[0];
    for(int i = 1;i<n;i++){
        pre[i] = pre[i-1]+arr[i];
    }
    if(pre[n-1]%2==1) cout<<"cannot be partitioned"<<endl;
    else{
        int found = -1;
        for(int i = 0; i<n;i++){
            if(pre[i]==pre[n-1]/2){
                found = i;
            }
        }
        if(found == -1) cout<<"cannot be partitioned"<<endl;
        else{
            cout<<"can be partitioned; sum = "<<pre[n-1]/2<<" at index "<<found<<endl;
        }
    }
    return 0;
}