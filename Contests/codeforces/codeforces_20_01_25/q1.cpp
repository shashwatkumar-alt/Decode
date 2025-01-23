#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr(n);
        int oddcounter = 0;
        bool even = false;
        for(int i = 0; i<n;i++){
            cin>>arr[i];
            if(arr[i]%2 == 1) oddcounter++;
            else even = true;
        }
        if(even == true) cout<<++oddcounter<<endl;
        else cout<<--oddcounter<<endl;
    }
    return 0;
}