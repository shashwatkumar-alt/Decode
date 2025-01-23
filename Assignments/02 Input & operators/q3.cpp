// Predict the output of this code :
// Let the input be : 2 3
// Answer : 2

#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    x+=y;                               // x = 2 + 3 = 5
    x-=y;                               // x = 5 - 3 = 2
    x%=y;                               // x = 2 % 3 = 2
    cout<<x;                            // 2
    return 0;
}