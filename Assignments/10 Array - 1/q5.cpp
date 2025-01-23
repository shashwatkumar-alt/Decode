// WAP to find the smallest missing positive element in the sorted Array that contains only positive 
// elements.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector <int> arr (n);
    cout<<"Enter array : \n";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int flag = -1;
    for(int i = 0 ; i<n;i++){
        if(arr[i]!=i){
            flag = i;
            break;
        }
    }
    if(flag == -1) cout<<n;
    else cout<<flag;
    return 0;
}