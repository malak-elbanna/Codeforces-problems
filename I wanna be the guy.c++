#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, i, intArray[10000], count = 0;
    cin >> n;
    cin >> p;
    for (i = 0; i < p; i++)
    {
        cin >> intArray[i];
    }
    cin >> q;
    for (i = p; i < (p + q); i++)
    {
        cin >> intArray[i];
    }
    sort(intArray, ((intArray) + (p + q)));
    for (i = 0; i < (p + q); i++)
    {
        if (intArray[i] != intArray[i + 1])
        {
            count++;
        }
    }
    if (count == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}