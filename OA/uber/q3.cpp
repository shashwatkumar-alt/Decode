#include <bits/stdc++.h>
using namespace std;

int largestPartnerClusterProduct(int partnerCount,
                                 const vector<int>& restaurantFrom,
                                 const vector<int>& restaurantTo,
                                 const vector<int>& restaurantIds) {
    unordered_map<int, unordered_set<int>> hubPartners;

    int n = restaurantFrom.size();
    for (int i = 0; i < n; ++i) {
        int hub = restaurantIds[i];
        hubPartners[hub].insert(restaurantFrom[i]);
        hubPartners[hub].insert(restaurantTo[i]);
    }

    int maxProduct = 0;

    for (auto& kv : hubPartners) {
        auto& partners = kv.second;
        if (partners.size() < 2) continue; // need at least 2 partners

        int minID = INT_MAX;
        int maxID = INT_MIN;
        for (int id : partners) {
            minID = min(minID, id);
            maxID = max(maxID, id);
        }
        int product = minID * maxID;
        maxProduct = max(maxProduct, product);
    }

    return maxProduct;
}

int main() {
    int partnerCount = 6;
    vector<int> restaurantFrom = {1, 2, 4, 5};
    vector<int> restaurantTo   = {2, 3, 5, 6};
    vector<int> restaurantIds  = {10, 10, 20, 20};

    cout << largestPartnerClusterProduct(partnerCount, restaurantFrom, restaurantTo, restaurantIds) << endl;
    // Output: 12
    return 0;
}
