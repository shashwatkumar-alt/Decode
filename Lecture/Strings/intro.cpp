#include<bits/stdc++.h>
using namespace std;
int main() { 
    string s;
    cin>>s;             // This will only input string with no spaces or till no spaces.
    cout<<s<<endl;
    // To input the whole line we have to use
    getline(cin,s);
    cout<<s;
    return 0;
}