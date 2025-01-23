#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num > 0 ){
        int f=1;
        for(int i = 1; i<=num ;i++){
            f = f*i;
        }
        return f;
    }
    else if (num == 0) return 1;
    else return -1;
}

int npr(int n, int r){
    return (fact(n)/ fact(n-r));
}

int ncr(int n, int r){  
    return (fact(n)/(fact(n-r)*fact(r)));
}

int main() { 
    int choice;
    cout<<"What do you want to calculate: "<<endl<<"Press 1: Permutation.\nPress 2: Combination."<<endl;
    cin>>choice;
    if(choice == 1){
        int n,r;
        cout<<"Enter the value of n: ";
        cin>>n;
        cout<<"Enter the value of r: ";
        cin>>r;

        cout<<"Permutation = "<<npr(n,r);
    }
    else if(choice == 2){
        int n,r;
        cout<<"Enter the value of n: ";
        cin>>n;
        cout<<"Enter the value of r: ";
        cin>>r;

        cout<<"Combinatio = "<<ncr(n,r);
    }
    else cout<<"Invalid Input."<<endl;
    return 0;
}