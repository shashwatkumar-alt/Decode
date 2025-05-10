// Calculate the value of sqrt(x) using binary search.


#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int l = 0, h=n,sq = -1;
    while(l<=h){
        float mid = l + (h-l)/2;
        if(mid*mid == n){
            sq = mid;
            break;
        }
        else if(mid*mid >n) h = mid-1;
        else l = mid+1;
    }
    if(sq == -1) cout<<"perfect square root before n is "<<h<<" which is "<<h*h<<endl;
    else cout<<"square root = "<<sq<<endl;
    return 0;
}