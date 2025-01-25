// Find the first non-repeating element in the array .

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        bool found = false;
        for(int j = i+1; j<n;j++){
            if(arr[i]==arr[j]) found = true;
        }
        if(found) continue;
        else{
            cout<<arr[i];
            break;
        }
    }
    return 0;
}