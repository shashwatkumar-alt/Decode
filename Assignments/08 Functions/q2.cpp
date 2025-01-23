// Write a function that takes the radius of a circle as an argument and returns its area.

#include<bits/stdc++.h>
using namespace std;
float area (float n){
    return (3.14 * n * n);
}
int main() { 
    float n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<area(n);
    return 0;
}