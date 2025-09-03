#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int sellGold(int input1, int input2[]) {
    int n = input1;
    if (n <= 0) return 0;
    
    /* Allocate memory for the DP array */
    long long** dp = (long long**)malloc(n * sizeof(long long*));
    int i, j;
    for (i = 0; i < n; i++) {
        dp[i] = (long long*)malloc(n * sizeof(long long));
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
    
    /* Free allocated memory */
    for (i = 0; i < n; i++) {
        free(dp[i]);
    }
    free(dp);
    
    return (int)ans;
}
