// Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    float rad;
    cout<<"Enter radius :";
    cin>>rad;
    float cir = 2*3.14 *rad;
    float area = 3.14*rad*rad;
    cir >= area ? cout<<"Circumference " : cout<<"Area ";
    cout<<"is Numerically greater.";
    return 0;
}