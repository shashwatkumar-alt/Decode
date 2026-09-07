#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        unsigned long long n;
        cin>>n;
        long long count = 0;
        while(n>3){
            n /= 4;
            count ++;
        }
        count = pow(2,count);
        cout<<count<<endl;
    }
    return 0;
}