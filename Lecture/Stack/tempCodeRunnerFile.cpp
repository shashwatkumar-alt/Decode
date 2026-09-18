id display(stack<int> st){
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<'\n';
}