#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num > 0 ){
        int f=1;
        for(int i = 1; i<=num ;i++){
            f = f*i;
        }
        return f;
    }
    else if (num == 0) return 1;
    else return -1;
}
int ncr(int n, int r){  
    return (fact(n)/(fact(n-r)*fact(r)));
}

int main() { 
    int n;
    cout<<"Enter length: ";
    cin>>n;
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<=i ; j++ ){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}