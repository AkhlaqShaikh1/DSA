#include <bits/stdc++.h>
#define nl '\n'
#define _time_ clock_t tStart = clock();
#define _show_ printf("Time taken: %.6fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#define ll long long int
#define loop(a, b) for (ll i = a; i <= b; ++i)
#define count_1(n) __builtin_popcountll(n)
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define clr(x) x.clear()
#define MOD 1000000007
#define itoc(c) ((char)(((int)'0') + c))
#define vec(i,n) vector<i> a(n);
#define pll pair<ll, ll>
#define pii pair<int, int>
#define all(p) p.begin(), p.end()
#define mid(s, e) (s + (e - s) / 2)
#define sv()           \
    ll t, n;           \
    scanf("%lld", &t); \
    n = t;             \
    while (t--)
#define tcase() \
    ll t, n;    \
    cin >> t;   \
    n = t;      \
    while (t--)
#define iscn(num) scanf("%d", &num);
using namespace std;
int main()
{   
    int n,police=0,crimes=0,unsolved=0;
    cin >> n;
    while(n--){
        int x;
        cin>>x;
        if(x==-1){
            if(!police) unsolved++;
            else police--;
        }
        else{
            police += x;
        }
    }
        cout << unsolved;
    

    return 0;
}