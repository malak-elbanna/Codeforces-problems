#include <iostream>
using namespace std;

int main(void){
    int n, h;
    cin >> n >> h;

    int personHeight=0;
    int a = 0;
    for (int i = 0; i < n; i++){
        cin >> personHeight;
        if (personHeight <= h) {
            a += 1;
        }
        else {
            a += 2;
        }
    }
    cout << a;
}