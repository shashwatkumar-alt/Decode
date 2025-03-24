// Built in functions of strings in c++ :-
//                                          * .size() function
//                                          * .push_back() function, only chars
//                                          * .pop_back() function, only chars
//                                          * '+' operater = appends two strings.
//                                          * reverse(<str_name>.begin() , <str_name>.end()) function.
//                                          * <str_name>.substr(from_idx, length).
//                                          * to_string(int_variable_name).
#include<bits/stdc++.h>
using namespace std;
int main() { 
    string s,t;
    s = "Shashwat";
    t = "Kumar";
    // <string_name>.size() gives length of the string.
    int length = s.size();
    cout<<"length = "<<length<<endl;
    // push_back and pop_back() functions do works with strings but only enters/deletes characters.
    s.push_back('s');
    cout<<"Added s "<<s<<endl;
    s.pop_back();
    cout<<"Popped s "<<s<<endl;
    // + operator which appends two strings
    string g = s+t;
    cout<<"s + t = "<<g<<endl;
    // name.substr(idx,len) - it prints the substring starting from index of length given.
    cout<<g.substr(0,8)<<endl;
    // to_string(int_variable_name) - converts int to string.
    int x = 123121;
    g = to_string(x);
    cout<<g<<endl;
    return 0;
}