#include <iostream>
using namespace std;

int main() {
    char X;
    cin >> X;

    if (isdigit(X)) {
        cout << "IS DIGIT" << endl;
    } else if (isalpha(X)) {
        cout << "ALPHA" << endl;
        if (isupper(X)) {
            cout << "IS CAPITAL" << endl;
        } else {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}