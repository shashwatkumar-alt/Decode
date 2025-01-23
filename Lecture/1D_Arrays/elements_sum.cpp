// Q. Calculate the sum of all the elements in the array.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of elemnts: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: \n";
    int sum = 0;
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"The sum of elements is "<<sum;
    return 0;
}