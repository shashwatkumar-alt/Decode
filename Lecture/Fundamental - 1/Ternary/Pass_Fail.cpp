//Q. Given marks of a student. If marks > 33 then print PASS otherwise print FAIL. Without using IF-ELSE.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int marks;
    cout<<"Enter the marks of the student: ";
    cin>>marks;
    (marks>33)? cout<<"PASS" : cout<<"FAIL" ; 
    return 0;
}