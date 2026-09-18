#include<bits/stdc++.h>
using namespace std;

class Node{
public :
    int val;
    Node* prev;
    Node(int val){
        this->val = val;
        this->prev = NULL;
    }
};

class Stack{
private :
    Node * tail;
    int sz;
public :
    Stack(){
        tail = NULL;
        sz = 0;
    }
    void push(int val){
        Node * temp = new Node(val);
        if(sz > 0){
            temp->prev = tail;
        }
        tail = temp;
        sz++;
    }
    void pop(){
        if(sz == 0) {
            cout<<"Stack empty !!!\n";
            return;
        }
        Node *temp = tail;
        tail = tail->prev;
        delete(temp);
        sz--;
    }
    int top(){
        if(sz == 0) {
            cout<<"Stack is empty\n";
            return -1;
        }
        return tail->val;
    }
    int size(){
        return sz;
    }
};


int main() { 
    Stack st;
    st.push(0);
    cout<<st.top()<<'\n';
    cout<<st.size()<<'\n';
    st.pop();
    cout<<st.top()<<'\n';
    cout<<st.size()<<'\n';
    st.push(0);
    st.push(1);
    st.push(2);
    cout<<st.top()<<'\n';
    cout<<st.size()<<'\n';
    return 0;
}