#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int dp[2001][2001]; // enough for N up to 2000

int solve(int arr[], int i, int j, int day, int n) {
    if(i > j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int left = arr[i]*day + solve(arr, i+1, j, day+1, n);
    int right = arr[j]*day + solve(arr, i, j-1, day+1, n);
    return dp[i][j] = (left > right ? left : right);
}

int sellGold(int input1, int input2[]) {
    memset(dp, -1, sizeof(dp));
    return solve(input2, 0, input1-1, 1, input1);
}

// Function to print the step-by-step process 
void printSteps(int arr[], int n) {
    memset(dp, -1, sizeof(dp));
    int left = 0;
    int right = n - 1;
    int day = 1;
    long long totalProfit = 0;
    
    while (left <= right) {
        // Recalculate the optimal decision at each step
        int leftProfit = arr[left] * day + (left + 1 <= right ? dp[left+1][right] : 0);
        int rightProfit = arr[right] * day + (left <= right - 1 ? dp[left][right-1] : 0);
        
        if (leftProfit >= rightProfit) {
            cout << "Day " << day << ": Sell left ornament (value=" << arr[left] << ") for " << arr[left] * day << endl;
            totalProfit += arr[left] * day;
            left++;
        } else {
            cout << "Day " << day << ": Sell right ornament (value=" << arr[right] << ") for " << arr[right] * day << endl;
            totalProfit += arr[right] * day;
            right--;
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
    solve(input2_1, 0, input1_1-1, 1, input1_1); // Fill the DP table
    printSteps(input2_1, input1_1);
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
    solve(input2_2, 0, input1_2-1, 1, input1_2); // Fill the DP table
    printSteps(input2_2, input1_2);
    
    return 0;
}
