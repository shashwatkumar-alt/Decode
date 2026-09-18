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
void bottom(stack<int>& st,int val){
    if(st.empty()) {
        st.push(val);
        return;
    }

    int x = st.top();
    st.pop();
    bottom(st,val);

    st.push(x);
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
    bottom(st,0);
    display(st);
    return 0;
}