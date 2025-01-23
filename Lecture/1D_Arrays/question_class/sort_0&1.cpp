// Q.  Sort the arrays of 0's and 1's.
#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter size:\t";
    cin>>n;
    cout<<"Enter the array of 0's and 1's: \n"<<endl;
    int arr[n];
    int count = 0;
    for(int i = 0; i<n ;i++){
        cin>>arr[i];
        if(arr[i]==0){
            count++;
        }
    }
    for(int i = 0 ; i < n ; i++ ){
        if(i < count) cout<<0<<" ";
        else cout<<1<<" ";
    }

    return 0;
}