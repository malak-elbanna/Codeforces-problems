#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void) {
    string input;
    cin >> input;

    string pattern = "";
    string output = "";

    for (int i = 0; i < input.length(); i++) {
        pattern += input[i];
        if (pattern == "WUB") {
            pattern = "";
            if (output.length() > 0 && output[output.length() - 1] != ' ') {
                output += ' ';
            }
        } else if (i == input.length() - 1 || input[i + 1] == 'W') {
            output += pattern;
            pattern = "";
        }
    }

    cout << output << endl;
    return 0;
}