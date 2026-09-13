// Printing the elements from top to down and down to top based on function.

#include<bits/stdc++.h>
using namespace std;

void topDownPrint(stack<int> st){
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<'\n';
}
void downTopPrint(stack<int> st){
    stack<int> temp;
    while (!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<'\n';
}


int main() { 
    // creating the stack.
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    topDownPrint(st);
    downTopPrint(st);

    return 0;
}