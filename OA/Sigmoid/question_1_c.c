#include <stdio.h>
#include <string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int sellGold(int input1, int input2[]) {
    int n = input1;
    if (n <= 0) return 0;
    
    /* Define the DP array with a reasonable size limit */
    long long dp[1000][1000];
    
    /* Initialize the DP array */
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            dp[i][j] = 0;
        }
    }
    
    /* Fill the DP table */
    int len, day;
    long long leftVal, rightVal;
    for (len = 1; len <= n; ++len) {
        for (i = 0; i + len - 1 < n; ++i) {
            j = i + len - 1;
            day = n - (j - i);
            leftVal  = (long long)input2[i] * day + ((i+1 <= j) ? dp[i+1][j] : 0);
            rightVal = (long long)input2[j] * day + ((i <= j-1) ? dp[i][j-1] : 0);
            dp[i][j] = MAX(leftVal, rightVal);
        }
    }
    
    long long ans = dp[0][n-1];
    return (int)ans;
}

/* Function to trace the optimal solution and print the steps */
void printSolution(int arr[], int n) {
    /* Define the DP array */
    long long dp[1000][1000];
    
    /* Initialize the DP array */
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            dp[i][j] = 0;
        }
    }
    
    /* Fill the DP table */
    int len, day;
    long long leftVal, rightVal;
    for (len = 1; len <= n; ++len) {
        for (i = 0; i + len - 1 < n; ++i) {
            j = i + len - 1;
            day = n - (j - i);
            leftVal  = (long long)arr[i] * day + ((i+1 <= j) ? dp[i+1][j] : 0);
            rightVal = (long long)arr[j] * day + ((i <= j-1) ? dp[i][j-1] : 0);
            dp[i][j] = MAX(leftVal, rightVal);
        }
    }
    
    /* Trace the solution */
    i = 0;
    j = n-1;
    day = 1;
    long long totalProfit = 0;
    
    printf("Step-by-step solution:\n");
    while (i <= j) {
        leftVal = (long long)arr[i] * day + ((i+1 <= j) ? dp[i+1][j] : 0);
        rightVal = (long long)arr[j] * day + ((i <= j-1) ? dp[i][j-1] : 0);
        
        if (leftVal > rightVal) {
            printf("Day %d: Sell left ornament (value=%d) for %lld\n", day, arr[i], (long long)arr[i] * day);
            totalProfit += (long long)arr[i] * day;
            i++;
        } else {
            printf("Day %d: Sell right ornament (value=%d) for %lld\n", day, arr[j], (long long)arr[j] * day);
            totalProfit += (long long)arr[j] * day;
            j--;
        }
        day++;
    }
    printf("Total profit: %lld\n", totalProfit);
}

int main() {
    int arr[] = {2, 4, 6, 2, 5};
    int n = 5;
    
    printf("Test Case 1: [2, 4, 6, 2, 5]\n");
    int result1 = sellGold(n, arr);
    printf("Maximum profit: %d\n", result1);
    printSolution(arr, n);
    printf("\n");
    
    int arr2[] = {100, 1, 1, 1};
    int n2 = 4;
    printf("Test Case 2: [100, 1, 1, 1]\n");
    int result2 = sellGold(n2, arr2);
    printf("Maximum profit: %d\n", result2);
    printSolution(arr2, n2);
    
    return 0;
}
