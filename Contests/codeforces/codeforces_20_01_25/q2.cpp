#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <long long> arr(n);
        unordered_map <long long, int> mpp;
        long long oppo, s1,s2;
        bool oppo_taken = false,s_taken = false;
        for(int i = 0; i<n;i++){
            cin>>arr[i];
            mpp[arr[i]]++;
            if((mpp[arr[i]] >=2)&&(oppo_taken == false)){
                oppo = arr[i];
                oppo_taken = true;
                mpp[arr[i]] -= 2;
            }
            if((mpp[arr[i]/2]>=1 && mpp[arr[i]]>=1)&&(s_taken == false)){
                s_taken = true;
                s1 = arr[i]/2;
                s2 = arr[i];
                mpp[arr[i]/2]--;
                mpp[arr[i]]--;
            }
            else if((mpp[arr[i]*2]>=1 && mpp[arr[i]]>=1)&&(s_taken == false)){
                s_taken = true;
                s1 = arr[i]*2;
                s2 = arr[i];
                mpp[arr[i]*2]--;
                mpp[arr[i]]--;
            }
        }

    }
    return 0;
}