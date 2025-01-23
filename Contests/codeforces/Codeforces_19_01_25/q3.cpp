#include<bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector <int> num;
        int count = 0;
        // unordered_map <int,int> res;
        for(int i = 0; i<n;i++){
            int temp;
            cin>>temp;
            if(i == 0) num.push_back(temp);
            // res[num[i]]++;
            // int comp = k-num[i];
            // if(res[comp] > 0){
            //     count++;
            //     res[comp]--;
            //     res[num[i]]--;
            // }
            else{
                bool used = false;
                for(auto it : num){
                    if((it+temp)==k){
                        num.erase(find(num.begin(),num.end(),it));
                        count++;
                        used = true;
                    }
                }
                if(used == false) num.push_back(temp);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}