#include<bits/stdc++.h>
using namespace std;

class Node{
private:
    int val;
    Node *next;
public:
    Node(int val);
    ~Node();
    void val_setter(int val){
        this->val = val;
    }
    void next_setter(Node *next){
        this->next = next;
    }
    int val_getter(){
        return this->val;
    }
    Node* next_getter(){
        return this->next;
    }
};

Node::Node(int val){
    val_setter(val);
    next_setter(NULL);
}

Node::~Node(){
    cout<<"Node with value "<<val<<" is deleted.\n";
}

void display(Node *a){
    if(a->next_getter() == NULL){
        cout<<a->val_getter()<<" ";
        return;
    }
    else{
        cout<<a->val_getter()<<" ";
        display(a->next_getter());
    }
}


int main() { 
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    // Forming ll
    a->next_setter(b);
    b->next_setter(c);
    c->next_setter(d);

    display(a);

    return 0;
}