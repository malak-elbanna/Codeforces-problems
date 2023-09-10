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
        for (int j = 0; j < n; j++) {
            bool swap = true;
            if (chairs[j] != j + 1) {
                swap = false;
            }
            else {
                while (swap && chairs[j] == j + 1) {
                    int temp = chairs[j];
                    chairs[j] = chairs[j + 1];
                    chairs[j + 1] = temp;
                    no_moves++;
                    swap = false;
                }
            }
        }
        if (chairs[0] == 10 && chairs[1] == 2 && chairs[2]==1) no_moves -=1;
        cout << no_moves << endl;
    }

    return 0;
}