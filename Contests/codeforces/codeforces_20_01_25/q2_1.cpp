#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <long long> arr(n);
        vector <long long> dou;
        vector <long long> square;
        vector <long long> details;
        unordered_map <long long, int> mpp;
        for(int i =0; i<n;i++){
            cin>>arr[i];
            mpp[arr[i]]++;
            if(mpp[arr[i]]==2){
                dou.push_back(arr[i]);
            }
            if(mpp[arr[i]]==4) {
                square.push_back(arr[i]);
            }
            if(mpp[arr[i]/2]>=1){
                details.push_back(arr[i]/2);
                details.push_back(arr[i]);
            }
            if(mpp[arr[i]*2]>=1){
                details.push_back(arr[i]);
                details.push_back(arr[i]*2);
            }
        }
        int sz = dou.size();
        if(square.size() >= 1){
            cout<<square[0]<<" "<<square[0]<<" "<<square[0]<<" "<<square[0]<<endl;
        }
        else if(sz>=2){
            cout<<dou[0]<<" "<<dou[0]<<" "<<dou[1]<<" "<<dou[1]<<endl;
        }
        else if(sz==1){
            int dsz = details.size();
            for(int i = 1; i<dsz;i+=2){
                double ht = sqrt(dou[0]*dou[0]-(details[i]/4)*(details[i]/4));
                if(ht>0){
                    cout<<dou[0]<<" "<<dou[0]<<" "<<details[i-1]<<" "<<details[i]<<endl;
                    break;
                }
            }
        }
        else if(sz==0){
            cout<<-1<<endl;
        }
    }
    return 0;
}