#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, q;
        cin >> n >> a >> q;

        string notifs;
        cin >> notifs;

        if (a == n) {
            cout << "YES" << endl;
            continue;
        }

        int unread = n - a;

        for (int i = 0; i < q; i++) {
            if (notifs[i] == '-') {
                unread++;
            } else {
                if (unread > 0) {
                    unread--;
                } else {
                    unread++;
                }
            }
        }

        if (unread == 0) {
            cout << "YES" << endl;
        } 
        else if (unread == (n-a)) {
            cout << "MAYBE" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}