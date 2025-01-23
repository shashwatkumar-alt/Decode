// The output of the following code will be :
    // (i)   ptr now points to b
    // (ii)  ptr2 now points to a
    // (iii) a gets value of b -----------------------------> Correct
    // (iv)  b gets value of a

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
    cout<<*ptr<<" "<<*ptr2;
    return 0;
}