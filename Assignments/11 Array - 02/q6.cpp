// Find the unique number in a given Array where all the elements are being repeated twice with 
// one value being unique.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter Elements : \n";
    vector <int> arr(n);
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i<n;i+=2){
        if(arr[i]==arr[i+1]) continue;
        else{
            cout<<arr[i];
            break;
        }
    }
    return 0;
}