// Predict the output :
// 1234
// if there would be spaces & and endl given in the code it would simply print the matrix.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[][2] = {{1,2},{3,4}};
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            cout << a[i][j];
    return 0;
}