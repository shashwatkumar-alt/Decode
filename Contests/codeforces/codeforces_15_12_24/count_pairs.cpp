#include<iostream>
#include<math.h>
using namespace std;
bool isPower(int y, int x, int k) {
    if (x == 0 || y % x != 0) {
        return false;
    }

    int z = y / x;

    while (z > 1) {
        if (z % k != 0) {
            return false;
        }
        z /= k;
    }

    return true;
}
int main() { 
    int t;
    cin>>t;
    while(t--){
        int k, l1, r1, l2, r2;
        cin>>k>>l1>>r1>>l2>>r2;
        int count = 0;
        // for(int x = l1; x<=r1; x++){
        //     for(int y = l2; y<=r2 ;y++){
        //         if(isPower(y,x,k)==true) count++;
        //     }
        // }
        
        cout<<count<<endl;
    }
    return 0;
}