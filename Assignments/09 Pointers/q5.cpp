// Is the following program snippet correct?
// Answer = This code snippet is not correct because here we are trying to asign the value 5 to a pointer 
// which is not possible.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;
    return 0;
}