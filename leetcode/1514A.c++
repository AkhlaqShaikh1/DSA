#include <bits/stdc++.h>
using namespace std;
#define MX 10000
bool sq[MX+5];

long long product(vector<int> a)
{
    long long ans = 1;
    for (auto &i : a)
    {
        ans *= i;
    }
    return ans;
}

bool isPerfectSqaure(long long ans)
{
    if (ans >= 0)
    {
        auto sr = sqrt(ans);

        return (sr * sr == ans);
    }
    return false;
}

int main()
{
    // freopen("input.txt" , "r" , stdin );
    // freopen("output.txt" , "w" , stdout );
	for (int i=1;i*i<=MX;i++)
	sq[i*i]=1;
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		bool ok=1;
		while (n--)
		{
			int a;
			scanf("%d",&a);
			ok&=sq[a];
		}
		puts(ok? "NO":"YES");
	}
}
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int> a(n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> a[i];
    //     }
    //     auto ans = product(a);
    //     bool result = isPerfectSqaure(ans);
    //     if (result)
    //     {
    //         cout << "NO\n";
    //     }
    //     else
    //     {
    //         cout << "YES\n";
    //     }
    // }
