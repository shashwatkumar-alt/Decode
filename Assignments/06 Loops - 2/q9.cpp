// Write a program to print out all Armstrong numbers between 1 and 500.

#include<bits/stdc++.h>
using namespace std;
bool armstrong(int i){
    int digit = 0,dup = i;
    while(dup>0){
        digit++;
        dup /= 10;
    }
    int sum = 0;
    dup = i;
    while(dup>0){
        sum += pow((dup%10),digit);
        dup /= 10;
    }
    if(sum==i) return true;
    else return false;
}
int main() { 
    for(int i = 1; i<=500;i++){
        if(armstrong(i)) cout<<i<<" ";
    }
    return 0;
}