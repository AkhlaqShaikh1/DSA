#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, group = 0;
    cin >> n;
    vector<int> mag(n);
    for (int i = 0; i < n; i++)
    {
        cin >> mag[i];
    }
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (mag[i] == mag[i + 1])
            {
                continue;
            }else{
                group++;
            }
        }
        cout << group;
    }
    return 0;
}