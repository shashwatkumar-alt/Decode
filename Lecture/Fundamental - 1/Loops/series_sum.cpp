//Q. Print the sum of the series : 1-2+3-4+5-6+7... upto n terms.

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int terms;
    cout<<"Enter the number of terms: ";
    cin>>terms;
    int sum = 0;
    for(int i = 1; i <= terms ; i++ ){
        if(i%2 == 0) sum += (-1)*i;
        else sum += i;
    }
    cout<<sum;
    return 0;
}