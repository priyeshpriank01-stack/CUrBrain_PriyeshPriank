
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 2) {
        cout << 0 << endl;
        return 0;
    }

    vector<bool> isPrime(n, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int p = 2; p * p < n; p++) {
        if (isPrime[p]) {
            for (int j = p * p; j < n; j += p) {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;

    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
