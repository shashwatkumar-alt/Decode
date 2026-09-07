#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> A;
        for(int i = 0; i <n ; i++){
            int num;
            cin>>num;
            A.push_back(num);
        }
        sort(A.begin(),A.end());
        int price = 0,done = 0;
        for(int i = 0; i<n ; i++){
            if((A[i]-done)>0){
                price += (A[i]-done);
            }
            done++;
        }
        cout<<price<<endl;
    }
    return 0;
}