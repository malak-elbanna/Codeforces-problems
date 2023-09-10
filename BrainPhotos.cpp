#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    char colors[n * m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> colors[i * m + j];
        }
    }
    bool blackWhite = false;
    for (int i = 0; i < n * m; i++) {
        if (colors[i] == 'W' || colors[i] == 'B' || colors[i] == 'G') {
            blackWhite = true;
        } else {
            blackWhite = false;
            break;
        }
    }
    if (blackWhite) {
        cout << "#Black&White" << endl;
    } else {
        cout << "#Color" << endl;
    }
    return 0;
}