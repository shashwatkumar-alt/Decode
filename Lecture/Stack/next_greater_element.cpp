//  arr : 3 1 3 5 4  6 2  3
//  ans : 5 2 5 6 6 -1 3 -1

#include<bits/stdc++.h>
using namespace std;

void using_array(vector<int> arr){
    for(int i = 0; i<arr.size();i++){

    }
}

void using_stack(vector<int> arr){
    stack<int> st;
    for(int i = arr.size()-1; i> = 0; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
    }
}


int main() { 
    ;
    return 0;
}