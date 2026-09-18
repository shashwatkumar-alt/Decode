#include<bits/stdc++.h>
using namespace std;
void display(stack<int> st){
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<'\n';
}
void pushAtBottom(int val, stack<int> &st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}
void reverse(stack<int>& st){
    if(st.empty()) return;

    int x = st.top();
    st.pop();
    reverse(st);

    pushAtBottom(x,st);
}


int main() { 
    // creating the stack.
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    display(st);
    reverse(st);
    display(st);
    return 0;
}