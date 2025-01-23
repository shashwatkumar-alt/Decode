#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int a,b,c1,c2,d,e;
        cin>>a>>b>>d>>e;
        int count1 = 0;
        c1 = e-d;
        if((a+b)==c1) count1++;
        if((b+c1)==d) count1++;
        if((c1+d)==e) count1++;
        int count2 = 0;
        c2 = a+b;
        if((a+b)==c2) count2++;
        if((b+c2)==d) count2++;
        if((c2+d)==e) count2++;
        count1 >= count2 ? cout<<count1<<endl : cout<<count2<<endl;
    }
    return 0;
}

// 3
// 2
// 2
// 1
// 1
// 2