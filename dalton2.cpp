#include <iostream>
using namespace std;

int main() {
    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++) {
        int n;
        cin >> n;
        int chairs[n];
        int no_moves = 0;
        for (int j = 0; j < n; j++) {
            cin >> chairs[j];
        }
        for (int j = 0; j < n - 1; j++) {
            while (chairs[j] != j + 1) {
                int temp = chairs[j];
                chairs[j] = chairs[temp - 1];
                chairs[temp - 1] = temp;
                no_moves++;
            }
        }
        cout << no_moves << endl;
    }

    return 0;
}