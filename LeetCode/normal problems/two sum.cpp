#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    for(int i = 0; i< (nums.size()-1) ; i++){
        for(int j = i ; j<(nums.size()) ; j++){
            if(nums[i]+nums[j]==target) return {i,j};
        }
    }
    return {};
}
int main() { 
    int n;
    cout<<"Size: ";
    cin>>n;
    vector<int> nums;
    cout<<"array: ";
    for(int i = 0; i < n ; i++){
        int input;
        cin>>input;
        nums.push_back(input);
    }
    int target;
    cout<<"Target: ";
    cin>>target;
    vector <int> ans = twoSum(nums, target);
    if(ans.size() != NULL){
        for(int i = 0; i< ans.size() ; i++){
            cout<<ans[i]<<" ";
        }
    }
    else cout<<"No index found.";
    return 0;
}