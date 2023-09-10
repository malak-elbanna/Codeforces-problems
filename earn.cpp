#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int maxVictoryPoints = 0;
    int unlocked = 0;

    for (int i = 0; i < n; i++) {
        if (cards[i] > 0) {
            maxVictoryPoints += cards[i];
            unlocked += cards[i];
        }

        if (unlocked > n) {
            unlocked = n;
        }
    }

    cout << maxVictoryPoints << endl;

    return 0;
}