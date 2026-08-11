#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main() { 
    // initialize of values
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    // forming LL
    a->next = b;
    b->next = c;
    c->next = d;
    // traversing
    Node* temp = a;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    // if we directly have to print value of 'd' from 'a'
    cout<<a->next->next->next->val;
    return 0;
}