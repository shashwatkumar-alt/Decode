#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int sellGold(int input1, int input2[]) {
    int left = 0;
    int right = input1 - 1;
    int day = 1;
    long long totalProfit = 0;
    
    // Process ornaments until all are sold
    while (left <= right) {
        // Calculate profit for each option
        // Cast to long long to prevent potential overflow
        if ((long long)input2[left] * day >= (long long)input2[right] * day) {
            totalProfit += (long long)input2[left] * day;
            left++;
        } else {
            totalProfit += (long long)input2[right] * day;
            right--;
        }
        day++;
    }
    
    return (int)totalProfit;
}

// Function to run a test case and print the result
void runTest(int input1, int input2[], const char* testName) {
    cout << "===== " << testName << " =====" << endl;
    cout << "Input: input1 = " << input1 << ", input2 = [";
    for (int i = 0; i < input1; i++) {
        cout << input2[i];
        if (i < input1 - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    int result = sellGold(input1, input2);
    cout << "Output: " << result << endl;
    
    // Show the step-by-step process for better understanding
    cout << "Step-by-step process:" << endl;
    int left = 0;
    int right = input1 - 1;
    int day = 1;
    
    while (left <= right) {
        long long leftProfit = (long long)input2[left] * day;
        long long rightProfit = (long long)input2[right] * day;
        
        cout << "Day " << day << ": ";
        if (leftProfit >= rightProfit) {
            cout << "Sell left ornament (value=" << input2[left] << ") for " << leftProfit << endl;
            left++;
        } else {
            cout << "Sell right ornament (value=" << input2[right] << ") for " << rightProfit << endl;
            right--;
        }
        day++;
    }
    cout << endl;
}

int main() {
    // Test case 1
    int input1_1 = 5;
    int input2_1[] = {2, 4, 6, 2, 5};
    runTest(input1_1, input2_1, "Test Case 1");
    
    // Test case 2
    int input1_2 = 4;
    int input2_2[] = {100, 1, 1, 1};
    runTest(input1_2, input2_2, "Test Case 2");
    
    return 0;
}
