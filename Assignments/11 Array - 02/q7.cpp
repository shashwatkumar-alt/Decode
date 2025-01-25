// If an array arr contains n elements, then check if the given array is a palindrome or not .

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter Elements : \n";
    vector <int> arr(n);
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    bool palindrome = true;
    for(int i = 0; i<ceil(n/2);i++){
        if(arr[n-1-i] != arr[i]){
            palindrome = false;
            break;
        }
    }
    if(palindrome) cout<<"Palindrome.";
    else cout<<"Not Palindrome.";

    return 0;
}