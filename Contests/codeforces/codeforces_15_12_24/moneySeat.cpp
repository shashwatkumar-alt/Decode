#include<iostream>
using namespace std;
void left(int &max, int m, int a){
    if(m>=a){
        max += a;
    }
    else max += m;
    return;
}
void right(int &max, int m, int b){
    if(m>=b){
        max += b;
    }
    else max += m;
    return;
}
int main() { 
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int max = 0;
        left(max,m,a);
        right(max, m,b);
        if(((2*m-max)-c)>0){
            cout<<max+c<<endl;
        }
        else cout<<(2*m)<<endl;
    }
    return 0;
}