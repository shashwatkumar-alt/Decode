#include<bits/stdc++.h>
using namespace std;

int getMaximumScore(int input1, int input2,int input3[]){
    int n = input1, k = input2;

    int maxm = 0;
    for(int i=0; i<k; i++){
        maxm += input3[i]*(i+1);
    }
    
    int i = 1;
    while(i+k-1 < n){
        int curr = 0;
        for(int j=0; j<k; j++){
            curr += input3[i+j]*(j+1);
        }
        maxm = max(curr, maxm);
        i++;
    }
    return maxm;
}

int main() { 
    int ar[] = {-2,3,1,9};
    cout<<getMaximumScore(4, 2, ar);
    return 0;
}