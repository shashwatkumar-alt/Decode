#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0; i<n;i++){
            cin>>arr[i];
        }
        int min=arr[0];
        for(int i = 0; i<n;i++){
            if(arr[i]>=min){
                cout<<"1 ";
                min = arr[i];
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}