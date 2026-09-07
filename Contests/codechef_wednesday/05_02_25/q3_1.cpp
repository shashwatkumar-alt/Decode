#include<bits/stdc++.h>
using namespace std;
void conquer(){
    int n,x;
    cin>>n>>x;
    vector <int> arr(n);
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    int count=1,maxi = 1;
    bool used = false;
    for(int i = 1; i<n;i++){
        if(arr[i-1]<=arr[i]){
            count++;
        }
        else{
            if((arr[i-1]<= (x*arr[i])||(x*arr[i-1]<=arr[i]))&&used == false){
                count++;
                used = true;
            }
            else{
                count = 1;
            }
        }
        maxi = max(maxi, count);
    }
    cout<<maxi<<endl;
}
int main() { 
    int tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
    return 0;
}