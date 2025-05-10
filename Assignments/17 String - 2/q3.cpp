// Input a string and return the number of substrings that contain only vowels.
// Input : str = "abjkoe"          Output : 4
// Input : str = "hgdhpw"          Output : 0

#include<bits/stdc++.h>
using namespace std;

bool onlyVowels(string s){
    int n = s.size();
    for(int i =0;i<n;i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') continue;
        else return false;
    }
    return true;
}

int main() { 
    string str;
    getline(cin,str);
    int n = str.size();
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            bool is = onlyVowels(str.substr(i, j - i + 1));
            if(is) count++;
        }
    }
    cout<<count;
    return 0;
}