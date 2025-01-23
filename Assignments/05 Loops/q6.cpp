// Program to print all alphabets and their ASCII value

#include<bits/stdc++.h>
using namespace std;
int main() { 
    for(int i = 0;i<26;i++){
        cout<<(char)(i+'A')<<" "<<(int)('A')+i<<endl;
    }
    return 0;
}