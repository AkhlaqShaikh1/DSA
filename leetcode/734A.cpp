#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string t1;
    cin >> t1;
    int d = 0, a = 0;
    for (int i = 0; i < t; i++)
    {
        if (t1[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a == d)
    {
        cout << "Friendship";
    }
    else if (a > d)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }

    return 0;
}