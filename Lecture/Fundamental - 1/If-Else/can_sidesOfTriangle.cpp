//Q. Take 3 number as input and tell if they can be sides of a triangle.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a,b,c;
    cout<<"Enter the three sides"<<endl;
    cin>>a>>b>>c;
    if((a+b)>c||(a+c)>b||(b+c)>a) cout<<"They can be sides.";
    else cout<<"They cannot be sides.";
    return 0;
}