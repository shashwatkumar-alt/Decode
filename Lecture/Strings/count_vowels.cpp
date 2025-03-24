// count the number of vowels in the string.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<s<<endl;
    int count = 0;
    // for(int i = 0; i<s.size();i++){
    //     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') count++;
    // }

    // WE CAN ALSO USE WHILE LOOP HERE.
    int i=0;
    while(s[i] != '\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') count++;
        i++;
    }
    cout<<count;
    return 0;
}