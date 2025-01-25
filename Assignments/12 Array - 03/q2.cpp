// Find the factorial of a large number.

#include<bits/stdc++.h>
using namespace std;

void multiply(vector <int>& arr, int& size, int multiplier){
    int carry = 0;
    for(int i = 0; i<size;i++){
        int res = arr[i]*multiplier;
        res += carry;
        arr[i] = res % 10;
        carry = res/10;
    }
    while(carry>0){
        arr[size] = carry%10;
        size++;
        carry /= 10;
    }
}

int main() { 
    int n;
    cin>>n;
    vector <int> arr(10000,0);
    arr[0] = 1;
    int size = 1;
    for(int i = 2; i<= n ;i++){
        multiply(arr,size,i);
    }
    vector <int> result;
    for(int i = size-1;i>=0;i--){
        result.push_back(arr[i]);
    }
    size = result.size();
    for(int i = 0; i<size;i++){
        cout<<result[i];
    }
    return 0;
}