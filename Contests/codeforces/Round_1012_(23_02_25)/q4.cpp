#include <bits/stdc++.h>
using namespace std;

const int LIMIT = 200000;
vector<bool> isPrime(LIMIT, true);

void sieveOfEratosthenes() {
    fill(isPrime.begin(), isPrime.end(), true);
    if (LIMIT > 1)
        isPrime[1] = false;
    
    for (int i = 2; i * i < LIMIT; i++) {
        if (!isPrime[i])
            continue;
        for (int j = i * i; j < LIMIT; j += i) {
            isPrime[j] = false;
        }
    }
}

void getPermutation(int num) {
    int primePos = 1;
    for (int i = 1; i <= (2 * num) / 3; i++) {
        if (isPrime[i]) {
            primePos = i;
        }
    }

    vector<int> sequence;
    sequence.push_back(primePos);
    int left = primePos - 1;
    int right = primePos + 1;

    while (true) {
        if (right > num)
            break;
        sequence.push_back(right++);
        if (left < 1)
            break;
        sequence.push_back(left--);
    }

    for (int i = 1; i <= left; i++)
        sequence.push_back(i);
    for (int i = right; i <= num; i++)
        sequence.push_back(i);

    for (int val : sequence)
        cout << val << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieveOfEratosthenes();

    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        getPermutation(num);
    }

    return 0;
}