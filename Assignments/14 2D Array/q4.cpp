// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int res[n][n];
    int ur = 0, dr = n-1, fc = 0, lc = n-1,max=n*n,count=0;
    for(int i = 0; i<= n/2; i++){
        for(int a = fc; a<= lc;a++){
            res[ur][a]=++count;
        }
        ur++;
        if(count>= max) break;
        for(int b = ur;b<=dr;b++){
            res[b][lc] = ++count;
        }
        lc--;
        if(count>= max) break;
        for(int c = lc;c>=fc;c--){
            res[dr][c]= ++count;
        }
        dr--;
        if(count>= max) break;
        for(int d = dr; d>=ur;d--){
            res[d][fc]= ++count;
        }
        fc++;
        if(count>= max) break;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}