#include <bits/stdc++.h>
using namespace std;
//Naive Algo
// int gcdSlow(int a, int b)
// {
//     int best = 0;
//     for (int i = 1; i < a + b; i++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             best = i;
//         }
//     }
//     return best;
// }
int gcdFast(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    int A = a % b;
    return gcdFast(b, A);
}
int main()
{
    int a,b; cin >> a >> b;
    cout << gcdFast(a, b);

    return 0;
}