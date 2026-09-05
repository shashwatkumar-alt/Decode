//  syntax :
//     stack<int> st ;         -> declaration
//     st.push(val)            -> insertion
//     st.pop()                -> deletion
//     st.top()                -> top value
//     st.size()               -> gives size of stack
//     st.empty()              -> returns boolean

#include<bits/stdc++.h>
using namespace std;
int main() { 
    stack<int> st;
    st.push(0);
    cout<<st.top()<<endl;
    st.push(10);
    cout<<st.top()<<endl;
    st.push(20);
    cout<<st.top()<<endl;
    st.push(30);  
    cout<<st.top()<<endl;
    st.push(40);
    cout<<st.top()<<endl;
    st.push(50);
    cout<<st.top()<<endl;
    st.push(60);
    cout<<st.top()<<endl;

    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        cout<<st.top()<<endl;
        st.pop();
    }
    while(!temp.empty()){
        st.push(temp.top());
        cout<<st.top()<<endl;
        temp.pop();
    }
    return 0;
}