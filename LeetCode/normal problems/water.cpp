#include<bits/stdc++.h>
using namespace std;
int main() { 
    int height[] =  {0,1,0,2,1,0,1,3,2,1,2,1};
    int i = 3,j=7;
    int count = 0,maxFill=height[i];
    while(i<j){
        i++;
        int fill = maxFill-height[i];
        count += fill;
    }
    cout<<count;
    return 0;
}