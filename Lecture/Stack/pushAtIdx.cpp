#include<bits/stdc++.h>
using namespace std;

void display(stack<int> st){
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<'\n';
}

void pushAtIdx(stack<int> &st, int val, int idx){
    stack<int> temp;
    idx = st.size()-idx;
    bool flag = false;
    for(int i = 0; i < idx; i++){
        if(st.empty()) {
            flag = true;
            break;
        }
        else{
            temp.push(st.top());
            st.pop();
        }
    }
    if(flag) {
        cout<<"Invalid Index.\n";
        return;
    }
    st.push(val);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    display(st);
}


int main() { 
    // creating the stack.
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    pushAtIdx(st,0,0);
    pushAtIdx(st,1,1);
    pushAtIdx(st,3,2);

    return 0;
}