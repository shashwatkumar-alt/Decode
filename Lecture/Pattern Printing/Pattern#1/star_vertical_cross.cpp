#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Enter the length: ";
    cin>>n;
    if(n%2==0){
        int mid1 = n/2;
        int mid2 = mid1 + 1;
        for(int i = 1; i<=n ; i++){
            for(int j = 1; j<= n ; j++){
                if(i==mid1 || i == mid2 || j==mid1 || j == mid2){
                    cout<<"* ";
                }
                else cout<<"  ";
            }
            cout<<endl;
        }
    }
    else{
        int mid = (n+1)/2;
        for(int i = 1; i<=n ; i++){
            for(int j = 1; j<= n ; j++){
                if(i==mid || j==mid){
                    cout<<"* ";
                }
                else cout<<"  ";
            }
            cout<<endl;
        }
    }
    return 0;
}