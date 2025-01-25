// Find the difference between the sum of elements at even indices to the sum of elements at odd 
// indices.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter Elements : \n";
    int arr[n];
    int even_sum = 0, odd_sum = 0;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
        if(i%2 == 0) odd_sum += arr[i];
        else even_sum += arr[i];
    }
    cout<<abs(even_sum - odd_sum);
    return 0;
}