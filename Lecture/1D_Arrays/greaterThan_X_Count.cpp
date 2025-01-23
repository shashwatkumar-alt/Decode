//Q. Count the number of elements in the given array gerater than a given number.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of elemnts: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: \n";
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter X: ";
    cin>>x;
    for(int i = 0; i<n; i++){
        if(arr[i]>=x){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}