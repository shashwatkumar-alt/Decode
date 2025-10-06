#include <bits/stdc++.h>
using namespace std;

int countProfitableSegments(vector<int>& rideList, int targetPremium) {
    unordered_map<int, int> freq;
    freq[0] = 1; // Base case: one way to have sum = 0 before we start
    
    int prefixSum = 0;
    long long count = 0; // use long long for safety in large inputs
    
    for (int ride : rideList) {
        int isPremium = (ride % 2 != 0) ? 1 : 0; // 1 if odd, 0 if even
        prefixSum += isPremium;
        
        int needed = prefixSum - targetPremium;
        
        if (freq.find(needed) != freq.end()) {
            count += freq[needed];
        }
        
        freq[prefixSum]++;
    }
    
    return (int)count;
}

int main() {
    vector<int> rideList = {8,11,14,7,4};
    int targetPremium = 1;
    
    cout << countProfitableSegments(rideList, targetPremium) << endl;
    // Expected Output: 4
    
    return 0;
}
