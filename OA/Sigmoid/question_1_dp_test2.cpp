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

// Function to reconstruct and print the optimal solution
void printOptimalSolution(int arr[], int n) {
    memset(dp, -1, sizeof(dp));
    solve(arr, 0, n-1, 1, n); // Fill the DP table first
    
    int i = 0, j = n-1;
    int day = 1;
    long long totalProfit = 0;
    
    while (i <= j) {
        int left = arr[i]*day + (i+1 <= j ? dp[i+1][j] : 0);
        int right = arr[j]*day + (i <= j-1 ? dp[i][j-1] : 0);
        
        if (left > right) {
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
