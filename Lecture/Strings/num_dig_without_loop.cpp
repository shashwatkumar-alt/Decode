// Return the total number of digits in a number without using any loop.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    long long x;
    cin>>x;
    string s = to_string(x);
    cout<<s<<endl;
    cout<<s.size();
    return 0;
}