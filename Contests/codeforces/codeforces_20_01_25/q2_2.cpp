#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> distinct(n);
        for(int i =0; i<n;i++){
            cin>>distinct[i];
        }
        sort(distinct.begin(),distinct.end());
        int dup = 0, index = -1;
        for(int i = 1; i<n;i++){
            if(distinct[i-1]==distinct[i] && distinct[i]>dup){
                dup = distinct[i];
                index = i;
            }
        }
        if(dup ==0) cout<<-1<<endl;
        else{
            int diff = 2147483647;
            int m1 = 0;
            int m2 = 0;
            int freq = 0;
            for(int i = 1; i<n;i++){
                if(distinct[i] != dup && distinct[i-1] != dup && distinct[i]-distinct[i-1]<diff){
                    m1 =  distinct[i-1];
                    m2 = distinct[i];
                    diff = distinct[i] - distinct[i-1];
                }
                if(distinct[i-1]==dup) freq++;
                if(freq > 2 && distinct[i]-distinct[i-1]<diff){
                    m1 = distinct[i-1];
                    m2 = distinct[i];
                    diff = distinct[i]-distinct[i-1];
                }
            }
            if(pow(dup,2)>=pow(diff/2,2)+1) cout<<dup<<" "<<dup<<" "<<m1<<" "<<m2<<endl;
            else cout<<-1<<endl;
        }

    }
    return 0;
}