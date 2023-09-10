#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s1[2], s2[2];
    for (int i = 0; i < 2; i++) {
        cin >> s1[i];
    }
    for (int i = 0; i < 2; i++) {
        cin >> s2[i];
    }
    if (s1[1] == s2[1]) cout << "ARE Brothers";
    else cout << "NOT";
    return 0;
}