#include<bits/stdc++.h>
using namespace std;
bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++)
        if (arr[i - 1] > arr[i])
            return false;

    return true;
}
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr(n);
        for(int i =0; i<n;i++){
            cin>>arr[i];
        }
        
    }
    return 0;
}