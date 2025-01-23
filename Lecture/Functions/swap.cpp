#include<bits/stdc++.h>
using namespace std;
int main() { 
    int x,y;
    cout<<"Enter x and y: "<<endl;
    cin>>x>>y;
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y;
    return 0;
}