// Count the number of elements strictly greater than x.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,x;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter Elements : \n";
    int arr[n];
    int count = 0;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
        if(arr[i]>x) count++;
    }
    cout<<count<<endl;
    return 0;
}