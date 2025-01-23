// Q. Find the element x in the array.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int  n;
    cout<<"Enter the number of elemnts: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: \n";
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to find: ";
    cin>>x;
    bool flag = false;
    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            flag = true;
        }
    }
    if(flag == true) cout<<"Element found.";
    else cout<<"Element not found.";
    return 0;
}