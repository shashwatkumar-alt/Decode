// WAP to create a calculator that performs basic arithemetic functions using switch case.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a,b;
    char ch;
    cin>>a>>ch>>b;
    switch (ch)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    default:
        cout<<"Invalid Input.";
        break;
    }
    return 0;
}