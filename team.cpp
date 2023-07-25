#include <iostream>
using namespace std;

int main(void) {
    int n, counter =  0, petya, vasya, tonya;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> petya >> vasya >> tonya;

        if ( (petya+vasya+tonya) >= 2) counter ++;
    }
    cout << counter;
}