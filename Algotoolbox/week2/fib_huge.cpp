#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll pisano_period(ll m)
{
    int prev = 0, current = 1, temp;
    for (int i = 0; i < (m * m); i++)
    {
        temp = prev;
        prev = current;

        current = (temp + current) % m;

        if (prev == 0 && current == 1)
        {
            return i + 1;
        }
    }
    return -1; //will never reach
}
ll fib_huge(ll n, ll m)
{
    int pisano = (n % pisano_period(m));
    ll prev = 0, cur = 1,temp;
    if (pisano == 0)
        return 0;
    else if (pisano == 1)
        return 1;

    for (int i = 0; i < pisano - 1; ++i)
    {
        temp = prev;
        prev = cur;
        cur = (temp + cur) % m;
    }

    return cur;
}
int main()
{
    ll n, m;
    cin >> n >> m;
    cout << fib_huge(n, m);
    return 0;
}