#include<bits/stdc++.h>
using namespace std;
string question1(string s){
    // Input a string of even length and reverse the first half of the string.
    if(s.size() % 2 == 1){
        cout<<"The string has odd characters."<<endl;
        return 0;
    }
    reverse(s.begin(),s.begin()+s.size()/2);
    return s;
}
string question2(string s){
    // Input a string and reverse the substring from position 2 to 5 using built-in functions.
    reverse(s.begin()+1,s.begin()+5);
    return s;
}
int main() { 
    string s;
    getline(cin,s);
    string t = question1(s);
    cout<<t<<endl;
    t = question2(s);
    cout<<t<<endl;
    return 0;
}