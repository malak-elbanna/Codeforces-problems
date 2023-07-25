#include <iostream>
using namespace std;

int main(void){
    int n1, n2, n3, n4, n5, iRow, jColumn, no_movesI=0, no_movesJ=0;

    for (int i = 0; i <5;i++) {
        cin >> n1 >> n2 >> n3 >> n4 >> n5;
        
        if (n1 == 1) 
        {
            iRow = 1;
            jColumn = i + 1;
        }
        else if (n2 == 1) {
            iRow = 2;
            jColumn = i + 1;
        }
        else if (n3 == 1) {
            iRow = 3;
            jColumn = i + 1;
        }
        else if (n4 == 1) {
            iRow = 4;
            jColumn = i + 1;
        }
        else if (n5 == 1) {
            iRow = 5;
            jColumn = i + 1;
        }
    }

    if (iRow > 3) no_movesI = iRow - 3;
    else if (iRow < 3) no_movesI = 3 - iRow;

    if (jColumn > 3) no_movesJ = jColumn - 3;
    else if (jColumn < 3) no_movesJ = 3 - jColumn;
    cout << no_movesI + no_movesJ;
}