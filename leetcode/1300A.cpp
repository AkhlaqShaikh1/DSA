#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt, sum = 0, pro = 1, count = 0;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == 0)
            {
                a[j] += 1;
                count++;
            }
            else if (a[j] < 0)
            {
                
                a[j] += 1;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}