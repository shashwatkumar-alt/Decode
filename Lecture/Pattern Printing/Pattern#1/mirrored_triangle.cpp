#include<bits/stdc++.h>
using namespace std;
int main() { 
    int a;
    cout<<"Enter the side: ";
    cin>>a;
    for(int i = 1 ; i <= a ; i++){
        for(int j = 1 ; j <= a ; j++){
            if((i+j)>a){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}