
#include <iostream>
#include <vector>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = arr[0];

    for (int i = 1; i < n; i++) {
        result = findGCD(result, arr[i]);
    }

    cout << result << endl;

    return 0;
}

