#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void) {
    string s, t;
    int i, j=0, k=1;
    cin >> s >> t;
    for (i=0;i <t.length ();i++){
        if (s[j] == t[i]){
            k++;
            j++;
        }
    }
    cout << k;
    return 0;
}