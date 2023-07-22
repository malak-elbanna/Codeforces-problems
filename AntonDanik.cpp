#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n, Acount=0, Dcount=0;
    cin >> n;

    string game;
    cin >> game;
    for (int i=0; i < n; i++) {
        if (game[i] == 'A') 
            Acount += 1;
        
        else if (game[i] == 'D') 
            Dcount +=1;
    }

    if (Acount == Dcount) 
        cout << "Friendship" << endl;

    else if (Acount > Dcount) 
        cout << "Anton" << endl;
    
    else if (Dcount > Acount) 
        cout << "Danik" << endl;
    
}