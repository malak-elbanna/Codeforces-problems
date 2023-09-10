#include <iostream>
using namespace std;

bool solvePuzzle(long long a, long long b, long long c, long long d) {
    if (a + b + c == d || a + b - c == d || a + b * c == d ||
        a - b + c == d || a - b - c == d || a - b * c == d ||
        a * b + c == d || a * b - c == d || a * b * c == d) {
        return true;
    }

    return false;
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (solvePuzzle(a, b, c, d)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}