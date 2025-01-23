// Passing array through function

#include<bits/stdc++.h>
using namespace std;

void display(int a[]){
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int a[]){
    a[5] = 45;
}

int main() { 
    int arr[8]={1,2,3,4,5,6,7,8};
    display(arr);
    change(arr);
    display(arr);
    return 0;
}