#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int inp[n][n];
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cin>>arr[i][j];
            }
        }
        int answer[n];
        int index;
        for(int i=0;i<n;i++){
            index=i+1;
            for(int j=0;j<n;j++){
                if(index<j+1&&in[i][j]==0)index++;
                if(index>j+1&&in[i][j]==0)index--;
            }
            answer[index-1] = i+1;
        }
        

    }
    return 0;
}