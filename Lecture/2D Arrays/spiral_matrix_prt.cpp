// 1 2 3    1 2 3 6 9 8 7 4 5
// 4 5 6    
// 7 8 9    

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n,m;
    cout<<"Enter the rows and columns : ";
    cin>>n>>m;
    int arr[n][m];
    // Input.
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // Spiral Printing
    int ur = 0, dr = n-1, fc = 0, lc = m-1,max=n*m,count=0;
    for(int i = 0; i<= n/2; i++){
        for(int a = fc; a<= lc;a++){
            cout<<arr[ur][a]<<" ";
            count++;
        }
        ur++;
        if(count>= max) break;
        for(int b = ur;b<=dr;b++){
            cout<<arr[b][lc]<<" ";
            count++;
        }
        lc--;
        if(count>= max) break;
        for(int c = lc;c>=fc;c--){
            cout<<arr[dr][c]<<" ";
            count++;
        }
        dr--;
        if(count>= max) break;
        for(int d = dr; d>=ur;d--){
            cout<<arr[d][fc]<<" ";
            count++;
        }
        fc++;
        if(count>= max) break;
    }
    return 0;
}