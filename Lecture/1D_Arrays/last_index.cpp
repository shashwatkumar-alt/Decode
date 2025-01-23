// Q. Find the last occurence of x in the vector array.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector <int> v;
    for(int i = 0; i<n ; i++){
        int z;
        cin>>z;
        v.push_back(z);
    }
    int num;
    cout<<"Enter the element to find :";
    cin>>num;
    int idx=-1;
    for(int i = n-1; i >= 0 ; i-- ){
        if(v[i]==num) idx = i;
    }
    cout<<"Element last occured at index "<<idx;
    return 0;
}