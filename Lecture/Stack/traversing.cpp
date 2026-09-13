// Traversing through a stack.

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

    // traversing.
    stack<int> temp = st;

    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }

    return 0;
}