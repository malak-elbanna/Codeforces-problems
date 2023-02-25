#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string user_name;
    cin >> user_name;

    set<char> mySet( user_name.begin() , user_name.end() );

    if (mySet.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}