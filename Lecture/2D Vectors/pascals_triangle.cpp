#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    vector<vector<int>>pascal(n);
    pascal[0].push_back(1);
    pascal[1].push_back(1);
    pascal[1].push_back(1);
    for(int i = 2; i<n;i++){
        pascal[i].push_back(1);
        for(int j = 1;j<i;j++){
            int temp = pascal[i-1][j-1]+pascal[i-1][j];
            pascal[i].push_back(temp);
        }
        pascal[i].push_back(1);
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<pascal[i].size();j++){
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}