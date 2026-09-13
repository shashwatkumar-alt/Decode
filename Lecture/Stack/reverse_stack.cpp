#include<bits/stdc++.h>
using namespace std;
int main() { 
    // creating the stack.
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"Original stack :\n";
    vector<int> arr;
    while(!st.empty()){
        arr.push_back(st.top());
        cout<<st.top()<<" ";
        st.pop();
    }
    for(int &i : arr){
        st.push(i);
    }
    cout<<"\nReversed stack :\n";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}