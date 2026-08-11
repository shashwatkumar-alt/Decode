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



int main() { 
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    // Forming ll
    a->next_setter(b);
    b->next_setter(c);
    c->next_setter(d);

    Node *temp = a;
    int count = 0;
    while(temp != NULL){
        cout<<temp->val_getter()<<" ";
        count++;
        temp = temp->next_getter();
    }
    cout<<"\nThe size of LL is "<<count<<endl;

    return 0;
}