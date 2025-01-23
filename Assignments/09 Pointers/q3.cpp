// The output of the following code will be :
    // (i)   11 11 10
    // (ii)  10 10 10
    // (iii) 11 10 11 --------------------------------> correct
    // (iv)  10 11 10

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a = 10, b = 20;
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout << *ptr << " " << a <<" " << b;
    return 0;
}