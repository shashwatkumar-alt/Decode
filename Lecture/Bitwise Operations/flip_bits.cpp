// given an integer n, flip all its bits , i.e; if the given bit is 1, change it to 0 and vice versa.
//  intuition :
//   1010111
//   1111111  <- we will derive, then bitwise XOR it.
//   0101000  <- answer.

#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Enter n :";
    int n;
    cin>>n;
    int width = 32 - __builtin_clz(n);
    int num = 0;
    for(int i = 0; i< width ; i++){
        num = (num<<1)+1;
    }
    n = n ^ num;
    cout<<n;
    return 0;
}