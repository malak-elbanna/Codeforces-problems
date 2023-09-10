#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, a, q;
        cin >> n >> a >> q;

        string notifs;
        cin >> notifs;

        if (n == a) {
            cout << "YES" << endl;
        } else {
            int aAfter = a;
            int count = 0;
            bool reachedA = false;

            for (int i = 0; i < q; i++) {
                if (notifs[i] == '+') {
                    aAfter++;
                } else if (aAfter > 0) {  
                    aAfter--;
                }
                if (aAfter == a) count++;
            }
            
            if (aAfter >= n) {
                cout << "YES" << endl;
            } else if ((count) == (n - a) || aAfter == a) {
                cout << "MAYBE" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}