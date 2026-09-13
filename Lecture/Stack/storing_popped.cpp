// Getting back elements after printing and popping in stack.

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

    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
    }

    // now, getting back elements.
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    return 0;
}