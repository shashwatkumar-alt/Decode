// count the number of set bits in a binary representation of a decimal number.

#include<bits/stdc++.h>
using namespace std;

int builtfn(int i){
    return __builtin_popcount(i);
}

int BrianKernighanAlgorithm (int i){
    int count = 0;
    while(i > 0){
        i = i & (i-1);
        count++;
    }
    return count;
}
int main() { 
    cout<<"Enter number :";
    int n;
    cin>>n;
    cout<<"using built in function : "<<builtfn(n);
    cout<<"\nusing Brian Kernighan's Algorithm : "<<BrianKernighanAlgorithm(n)<<endl;
    return 0;
}