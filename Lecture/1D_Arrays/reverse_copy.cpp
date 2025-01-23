//Q. WAP to copy the contents of one array into another in reverse order.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Size: ";
    cin>>n;
    vector <int> vec1;
    for(int i = 0; i< n ;i++){
        int input;
        cin>>input;
        vec1.push_back(input);
    }
    vector <int> vec2;
    for(int i = n-1; i>= 0 ; i--){
        vec2.push_back(vec1.at(i));
    }
    // Reverse vector output
    for(int i =0; i<n ;i++){
        cout<<vec2.at(i)<<" ";
    }
    return 0;
}