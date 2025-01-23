// Q. WAP to reverse the array without using any extra array.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cout<<"Size: ";
    cin>>n;
    vector <int> vec1;
    cout<<"Elements: \n";
    for(int i = 0; i< n ;i++){
        int input;
        cin>>input;
        vec1.push_back(input);
    }
    for(int i = 0, j = n-1; i<n/2,j>=(n/2)+1 ; i++, j--){
        int temp = vec1[i];
        vec1[i]= vec1[j];
        vec1[j]=temp;
    }
    for(int i =0; i<n ;i++){
        cout<<vec1.at(i)<<" ";
    }
    return 0;
}