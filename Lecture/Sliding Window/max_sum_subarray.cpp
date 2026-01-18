// Find the maximum sum subarray of size k.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int x;
    cout<<"Enter the window size : ";
    cin>>x;
    if(x>9){
        cout<<"Window size exceeded."<<endl;
        return 1;
    }
    else{
        int currSum = 0;
        for(int i = 0;i<x;i++){
            currSum += arr[i];
        }
        cout<<currSum<<endl;
        int i = 0,j=x,maxi = currSum;
        while(j<9){
            currSum = currSum - arr[i] + arr[j];
            maxi = max(maxi, currSum);
            cout<<currSum<<endl;
            i++;
            j++;
        }
        cout<<"The maximum sum of array of window size "<<x<<" is "<<maxi<<".\n";
    }
    return 0;
}