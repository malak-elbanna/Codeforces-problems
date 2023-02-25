#include<iostream>
#include<set>
using namespace std;

int main() {

    int n;
    cin >> n;

    int intArray[10000];
    int i;
    
    for (i = 0; i < n; i++)
    {
        cin >> intArray[i];
    }
    float sum = 0;
    set<char> mySet( intArray.begin() , intArray.end() );
    for (i = 0; i < mySet.size(); i++)
    {
        sum += intArray[i];
    }
    float avg = sum / n;
    cout << avg << endl;
    return 0;
}