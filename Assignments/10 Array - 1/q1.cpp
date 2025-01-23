// Calculate the product of all the elements in the given array.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array : \n";
    int product = 1;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        product *= arr[i];
    }
    cout<<product;
    return 0;
}