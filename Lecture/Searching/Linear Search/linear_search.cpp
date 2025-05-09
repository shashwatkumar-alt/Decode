#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,target;
    cout<<"enter the number of elements : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the sorted array : ";
    //Input
    for(int i = 0 ; i< n; i++) cin>>arr[i];
    cout<<"Enter the target : ";
    cin>>target;
    int lidx = -1;
    for(int i =0; i<arr.size();i++){
        if(arr[i]==target){
            lidx = i;
            break;
        }
    }
    if(lidx == -1) cout<<"Target not found.";
    else cout<<"Target found at index "<<lidx<<endl;
    return 0;
}