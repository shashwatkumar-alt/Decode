#include<bits/stdc++.h>
using namespace std;

int getMaximumScore(int input1, int input2,int input3[]){
    int n = input1, k = input2;

    // Calculate the score of the first window (indices 0 to k-1)
    int maxm = 0;
    cout << "Window 1 (indices 0 to " << (k-1) << "): ";
    for(int i=0; i<k; i++){
        maxm += input3[i]*(i+1);
        cout << input3[i] << "*" << (i+1) << " + ";
    }
    cout << "= " << maxm << endl;
    
    // Check all possible windows of size k
    int windowNum = 2;
    int i = 1;  // Start index of new window
    while(i+k-1 < n){  // Ensure window stays within array bounds
        cout << "Window " << windowNum << " (indices " << i << " to " << (i+k-1) << "): ";
        int curr = 0;  // Initialize curr for each window
        for(int j=0; j<k; j++){
            curr += input3[i+j]*(j+1);  // Calculate score for current window
            cout << input3[i+j] << "*" << (j+1) << " + ";
        }
        cout << "= " << curr << endl;
        
        if (curr > maxm) {
            cout << "New maximum found: " << curr << endl;
            maxm = curr;
        }
        
        i++;  // Slide the window
        windowNum++;
    }
    return maxm;
}

int main() { 
    int ar[] = {2,3,1,5,4};
    cout << "Array: [2,3,1,5,4]" << endl;
    cout << "k = 3" << endl;
    int result = getMaximumScore(5, 3, ar);
    cout << "Maximum score: " << result << endl;
    return 0;
}
