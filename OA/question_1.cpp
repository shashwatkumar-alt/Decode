#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int sellGold(int input1, int input2[]) {
    int n = input1;
    if (n <= 0) return 0;
    
    long long dp[1000][1000];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j] = 0;
        }
    }
    for (int len = 1; len <= n; ++len) {
        for (int i = 0; i + len - 1 < n; ++i) {
            int j = i + len - 1;
            int day = n - (j - i);
            long long leftVal  = (long long)input2[i] * day + ((i+1 <= j) ? dp[i+1][j] : 0);
            long long rightVal = (long long)input2[j] * day + ((i <= j-1) ? dp[i][j-1] : 0);
            dp[i][j] = MAX(leftVal, rightVal);
        }
    }
    
    long long ans = dp[0][n-1];
    return (int)ans;
}
int main(){
    int arr[] = {2, 4, 1, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = sellGold(n, arr);
    cout << "Maximum gold that can be sold: " <<result << endl;
    return 0;
}