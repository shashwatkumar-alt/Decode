#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> A;
        for(int i = 0 ; i<n; i++){
            int num;
            cin>>num;
            A.push_back(num);
        }
        int sec = 0;
        while(1){
            int change=0;
            for(int i = 0 ; i<n; i++){
                if(A[i]<A[i+1]){
                    A[i]= A[i+1];
                    change++;
                }
            }
            if(change==0) break;
            else sec++;
        }
        cout<<sec<<endl;
    }
    return 0;
}