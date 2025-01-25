// Find the error.
// the error was in line 16. It was written 'balance[]' but the correct is 'balance' only.
#include<bits/stdc++.h>
using namespace std;
double getAverage(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size;i++){
        sum += arr[i];
    }
    double avg = sum/size;
    return avg;
}
int main () {
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage( balance, 5 ) ;
    cout << "Average value is: " << avg << endl;
    return 0;
}