// Q. Print the greatest of all the elements in the array.

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
    cout<<"The greatest element is "<<max;
    return 0;
}