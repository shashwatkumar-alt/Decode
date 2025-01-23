// WAP for finding the volume of the cylinder by taking radius and height as input.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int rad,ht;
    cout<<"Enter radius : ";
    cin>>rad;
    cout<<"Enter height : ";
    cin>>ht;
    cout<<"Volume of cylinder : "<<(3.14*rad*rad*ht);
    return 0;
}