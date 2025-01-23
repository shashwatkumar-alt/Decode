#include<bits/stdc++.h>
using namespace std;

void find(int num,int* p1, int* p2){
    *p2 = num%10;
    while(num>9){
        num /=10;
    }
    *p1 = num;
}

int main() { 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int s,e;
    int *p1 = &s;
    int *p2 = &e;
    find(n, p1,p2);
    cout<<*p1<<endl<<*p2<<endl;
    return 0;
}