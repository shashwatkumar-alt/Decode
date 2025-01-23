// Q. Print the second greatest of all the elements in the array.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of elemnts: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: \n";
    int max = 0;
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int smax = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]>smax && arr[i] != max){
            smax = arr[i];
        }
    }
    cout<<"The second largest number is "<<smax;
    return 0;
}