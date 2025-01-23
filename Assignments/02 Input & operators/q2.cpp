// Predict the output of this code :
// Let the input be : 3 2
// Answer : 1 1

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter first number\n";
    cin >> x; // user will give 'x' a value.
    int y;
    cout << "Enter second number\n";
    cin >> y; // user will give 'y' a value.
    cout << (x!=y) << " " << (x>=y);
}