#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int sellGold(int input1, int input2[]) {
    int n = input1;
    if (n <= 0) return 0;
    vector<vector<long long>> dp(n, vector<long long>(n, 0LL));
    for (int len = 1; len <= n; ++len) {
        for (int i = 0; i + len - 1 < n; ++i) {
            int j = i + len - 1;
            int day = n - (j - i);
            long long leftVal  = (long long)input2[i] * day + ( (i+1 <= j) ? dp[i+1][j] : 0LL );
            long long rightVal = (long long)input2[j] * day + ( (i <= j-1) ? dp[i][j-1] : 0LL );
            dp[i][j] = max(leftVal, rightVal);
        }
    }
    long long ans = dp[0][n-1];
    return (int)ans;
}

// Function to reconstruct and print the optimal solution
void printOptimalSolution(int arr[], int n) {
    if (n <= 0) return;
    
    // First build the DP table
    vector<vector<long long>> dp(n, vector<long long>(n, 0LL));
    for (int len = 1; len <= n; ++len) {
        for (int i = 0; i + len - 1 < n; ++i) {
            int j = i + len - 1;
            int day = n - (j - i);
            long long leftVal  = (long long)arr[i] * day + ( (i+1 <= j) ? dp[i+1][j] : 0LL );
            long long rightVal = (long long)arr[j] * day + ( (i <= j-1) ? dp[i][j-1] : 0LL );
            dp[i][j] = max(leftVal, rightVal);
        }
    }
    
    // Now trace the optimal solution
    int i = 0, j = n-1;
    int day = 1;
    long long totalProfit = 0;
    
    while (i <= j) {
        int remainingDays = n - (j - i);
        long long leftVal = (long long)arr[i] * remainingDays + ((i+1 <= j) ? dp[i+1][j] : 0);
        long long rightVal = (long long)arr[j] * remainingDays + ((i <= j-1) ? dp[i][j-1] : 0);
        
        if (leftVal > rightVal) {
            cout << "Day " << day << ": Sell left ornament (value=" << arr[i] << ") for " << arr[i] * day << endl;
            totalProfit += arr[i] * day;
            i++;
        } else {
            cout << "Day " << day << ": Sell right ornament (value=" << arr[j] << ") for " << arr[j] * day << endl;
            totalProfit += arr[j] * day;
            j--;
        }
        day++;
    }
    cout << "Total profit: " << totalProfit << endl;
}

int main() {
    // Test case 1
    cout << "===== Test Case 1 =====" << endl;
    int input1_1 = 5;
    int input2_1[] = {2, 4, 6, 2, 5};
    cout << "Input: input1 = " << input1_1 << ", input2 = [";
    for (int i = 0; i < input1_1; i++) {
        cout << input2_1[i];
        if (i < input1_1 - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    int result1 = sellGold(input1_1, input2_1);
    cout << "Output: " << result1 << endl;
    
    cout << "Step-by-step process:" << endl;
    printOptimalSolution(input2_1, input1_1);
    cout << endl;
    
    // Test case 2
    cout << "===== Test Case 2 =====" << endl;
    int input1_2 = 4;
    int input2_2[] = {100, 1, 1, 1};
    cout << "Input: input1 = " << input1_2 << ", input2 = [";
    for (int i = 0; i < input1_2; i++) {
        cout << input2_2[i];
        if (i < input1_2 - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    int result2 = sellGold(input1_2, input2_2);
    cout << "Output: " << result2 << endl;
    
    cout << "Step-by-step process:" << endl;
    printOptimalSolution(input2_2, input1_2);
    
    return 0;
}
