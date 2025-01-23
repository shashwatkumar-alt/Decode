// Predict the output:
// Answer = 
// first character 1
// second character 49 -> because it prints ASCII value of 1 which is 49.
#include<iostream>
using namespace std;
int main(){
    int test = 0;
    cout << "First character " << '1' << endl;
    cout << "Second character " << (test ? 3 : '1') << endl;
    return 0;
}