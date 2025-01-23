// Q. Given an array of marks of students, if the mark of any student is less than 35 print its roll no.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the marks according to roll number: "<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0; i<n; i++){
        if(arr[i]<35){
            cout<<i+1<<endl;
        }
    }
    
    return 0;
}