// Q. Merge two sorted arrays. (LeetCode - 88)

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter size of both arrays: ";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter array 1:\n";
    for(int i =0; i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter array 2:\n";
    for(int i =0; i<n;i++){
        cin>>b[i];
    }
    int idx1=0,idx2=0,final_idx=0;
    int final[2*(n)];
    while(final_idx<(2*(n))){
        if(a[idx1]<b[idx2]){
            final[final_idx]=a[idx1];
            idx1++;
            final_idx++;
        }
        else{
            final[final_idx] = b[idx2];
            idx2++;
            final_idx++;
        }
    }
    //Printing
    for(int i = 0; i<(2*(n));i++){
        cout<<final[i]<<" ";
    }
    return 0;
}