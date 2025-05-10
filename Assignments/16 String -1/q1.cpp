// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based indexing.
// Input : str = "Pbwcshkuiglhlds"
// Output : "P#w#s#k#i#l#l#s"

// Input : str = "a"
// Output : "a"

#include<bits/stdc++.h>
using namespace std;
int main() { 
    string str;
    getline(cin,str);
    int n = str.size();
    for(int i = 1; i<n;i+=2){
        str[i] = '#';
    }
    cout<<str;
    return 0;
}