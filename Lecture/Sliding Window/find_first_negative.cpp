// given an integer array, find the first negative integer in a window of size k. Given, every window will contain atleast 1 negative number.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    cout<<"Enter the number of elements : ";
    int n;
    cin>>n;
    cout<<"Enter elements : \n";
    vector<int> arr(n);
    for(int i = 0; i<n;i++) cin>>arr[i];
    cout<<"Enter the window size : ";
    int w;
    cin>>w;
    int p = 0 , j = w;  
    for(p ; p < j ; p++){
        if(arr[p] < 0) break;
    }
    while(j <= n){
        if(j-w <= p) {
            cout<<arr[p]<<" ";
        }
        else{
            for(++p ; p < j ; p++){
                if(arr[p] < 0) break;
            }
            cout<<arr[p]<<" ";
        }
        j++;
    }
    cout<<endl;
    return 0;
}