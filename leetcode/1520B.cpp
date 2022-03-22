#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int res = 0;
    for (ll pw = 1; pw <= n; pw = pw * 10 + 1)
    {
        for (int d = 1; d <= 9; d++)
        {
            if (pw * d <= n)
            {
                res++;
            }
        }
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}