// Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"     Output : abcdhgfe
// Input : str = "pwians"       Output : pwisna

#include<bits/stdc++.h>
using namespace std;
int main() { 
    string str;
    getline(cin,str);
    int n = str.size();
    reverse(str.begin()+n/2,str.end());
    cout<<str;
    return 0;
}