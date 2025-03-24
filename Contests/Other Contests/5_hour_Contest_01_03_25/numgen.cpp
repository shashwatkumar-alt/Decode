#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream outFile("numbers.txt");  // Open file for writing

    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    for (int i = 1; i <= 390000; i++) {
        outFile << i << endl;  // Write number followed by a newline
    }

    outFile.close();  // Close the file
    cout << "File 'numbers.txt' created successfully!" << endl;

    return 0;
}
