#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        int count=0,score=0;
        for(int i =0; i<n;i++){
            if(a[i]=='1' && b[i]=='1'){
                score++;
            }
            else if(a[i]=='1' && b[i]=='0'){
                count++;
            }
            else if(a[i]=='0' && b[i]=='1'){
                count++;
            }
        }
        if(score % 2 == 0 && count != 0){
            cout<<"Yes"<<endl;
        }
        else if(score % 2 == 0 && count == 0){
            cout<<"No"<<endl;
        }
        else if(score % 2 == 1){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}