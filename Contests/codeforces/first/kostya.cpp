#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t>0){
        int words,maximum;
        cin>>words>>maximum;
        string arr[words];
        for(int i = 0; i<words;i++){
            cin>>arr[i];
        }
        int x = 0;
        for(int i = 0; i<words;i++){
            int t = arr[i].size();
            if(t<=maximum){
                x++;
                maximum -= t;
            }
            else break;
        }
        cout<<x<<endl;
        t--;
    }
    return 0;
}