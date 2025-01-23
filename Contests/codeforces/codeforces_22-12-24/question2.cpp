#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int count;
        int cycle = a+b+c;
        int max_cycle = n / cycle;
        if(n<cycle){
            count = 0;
        }
        else if(n % cycle == 0){
            cout<<(3*(n/cycle))<<endl;
            continue;
        }
        else{
            count = 3*(max_cycle);
            n = n - (cycle*max_cycle);
        }
        if(n>0){
            n = n - a;
            count++;
        }
        if(n>0){
            n = n - b;
            count++;
        }
        if(n>0){
            n = n - c;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}