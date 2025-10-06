#include <bits/stdc++.h>
using namespace std;

int maxEffectiveAvailability(vector<int>& availability, int groupSize) {
    int n = availability.size();
    if (groupSize == 0 || n == 0) return 0;
    if (groupSize > n) groupSize = n;

    deque<int> dq;
    int maxOfMins = INT_MIN;

    for (int i = 0; i < n; ++i) {
        while (!dq.empty() && availability[dq.back()] >= availability[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if (dq.front() <= i - groupSize)
            dq.pop_front();

        if (i >= groupSize - 1) {
            int currentMin = availability[dq.front()];
            maxOfMins = max(maxOfMins, currentMin);
        }
    }

    return maxOfMins == INT_MIN ? 0 : maxOfMins;
}

int main() {
    vector<int> availability = {8,2,4,6};
    int groupSize = 2;

    cout << maxEffectiveAvailability(availability, groupSize) << endl;
    // Expected output: 7

    return 0;
}
