#include <bits/stdc++.h>
using namespace std;
int main() {
    int testcases;
    cin>>testcases;
    while(testcases!=0){
        int days,n,sum=0,a,b,c,add;
        cin>>n>>a>>b>>c;
        days=0,add=a;
        while(sum<n){
            if(add==a){
                sum+=a;
                add=b;
            }
            else if(add==b){
                sum+=b;
                add=c;
            }
            else{
                sum+=c;
                add=a;
            }
            days++;
            if(sum>=n) break;
        }
        printf("\n%d",days);
        testcases--;
    }
    return 0;
}