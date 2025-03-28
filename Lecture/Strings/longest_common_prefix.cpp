// Input n strings and write a program to find the longest common prefix string of all the strings.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    cout<<"Enter the number of strings : ";
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ans = 0;
    n = min(arr[0].size(),arr[n-1].size());
    for(int i = 0; i <n;i++){
        if(arr[0][i] != arr[n-1][i]) break;
        count++;
    }
    cout<<count<<endl;
    return 0;
}