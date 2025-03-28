// Given n strings consisting of digits from 0 to 9. return the index of string which has maximum value.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    cout<<"Enter the number of string that will be entered : "<<endl;
    int n;
    cin>>n;
    vector<string>arr(n);
    int maxi = INT_MIN;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
        int temp = stoi(arr[i]);
        maxi = max (maxi,temp);
    }
    cout<<"max is "<<maxi;
    return 0;
}