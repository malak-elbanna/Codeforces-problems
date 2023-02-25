#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string creditcard_num;
    cout << "Enter credit card number: "<<endl;
    cin >> creditcard_num;

    int sum = 0;

    string credit = "";

    for (int i = 0; i < creditcard_num.length(); i++)
    {
        // stringstream geek(creditcard_num);
        //  int creditcard_num = 0;
        //  geek >> creditcard_num;

        if (i % 2 == 0)
        {
            credit += creditcard_num[i]*2;
        }
        else
        {
            credit += creditcard_num[i];
        }
    }
    string new_credit = credit;
    for (int i = 0; i < new_credit.length(); i++)
    {
        sum += credit[i];
    }
    if (sum % 10 == 0)
    {
        cout << "Valid credit card number";
    }
    else
    {
        cout << "Invalid credit card number";
    }
}