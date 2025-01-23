// NOTE that if condition only gets false when 0 parameter is given to it.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a;
    if (3+2%5){
        cout<<"This works."<<endl;
    }
    if (a=(10)){
        cout<<"This also works."<<endl;
    }
    if (-5){
        cout<<"Also, this works."<<endl;
    }
    
    return 0;
}