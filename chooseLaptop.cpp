#include <iostream>
#include <vector>
using namespace std;

struct Laptop {
    int speed;
    int ram;
    int hdd;
    int cost;
};

int main() {
    int n;
    cin >> n;

    vector<Laptop> laptops(n);
    for (int i = 0; i < n; i++) {
        cin >> laptops[i].speed >> laptops[i].ram >> laptops[i].hdd >> laptops[i].cost;
    }

    int bestChoice = -1;
    for (int i = 0; i < n; i++) {
        bool outdated = false;
        for (int j = 0; j < n; j++) {
            if (laptops[j].speed < laptops[i].speed &&
                laptops[j].ram < laptops[i].ram &&
                laptops[j].hdd < laptops[i].hdd) {
                outdated = true;
                break;
            }
        }
        if (!outdated && (bestChoice == -1 || laptops[i].cost < laptops[bestChoice].cost)) {
            bestChoice = i;
        }
    }

    cout << bestChoice << endl;

    return 0;
}