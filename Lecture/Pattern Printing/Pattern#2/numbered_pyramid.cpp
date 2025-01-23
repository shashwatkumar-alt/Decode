//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n :";
    cin>>n;
    for(int i = 1; i <= n ; i++){
        for(int j = n; j > i; j--){
            cout<<"  ";
        }
        int print = 1;
        for(int j = 1; j <= (2*i)-1 ; j++){
            if(j<  i) cout<<print++<<" ";
            else cout<<print--<<" ";
        }
        cout<<endl;
    }
    return 0;
}