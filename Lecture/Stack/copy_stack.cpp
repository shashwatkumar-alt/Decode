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

    // direct method
    stack<int> temp = st;
    cout<<"Copied Stack :\n";
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    // indirect method
    stack<int> temp1;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    stack<int> copied;
    while(!temp1.empty()){
        copied.push(temp1.top());
        cout<<copied.top()<<" ";
        temp1.pop();
    }
    return 0;
}