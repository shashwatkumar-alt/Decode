//WRONG because original values of x and y are not swapped.

#include<bits/stdc++.h>
using namespace std;
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
int main() { 
    int x=7, y =9;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}