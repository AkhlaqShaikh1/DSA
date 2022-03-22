#include<bits/stdc++.h>
#define nl '\n'
#define _time_ clock_t tStart = clock();
#define _show_ printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
#define loop(a,b)           for(ll i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vec(i)                vector<i>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
int main(){
    char ch[150];
    int i, l, c1=0, c2=0, c3=0;
    gets(ch);
    l = strlen(ch);
    for(i=0; i<l; i++)
    {
        if(ch[i] == '1')
        {
            c1++;
        }
        else if(ch[i] == '2')
        {
            c2++;
        }
        else if(ch[i] == '3')
        {
            c3++;
        }
    }
    for(i=0; i<c1; i++)
    {
        cout << '1';
        if((c2 == 0 && c3 == 0) && i == c1-1)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    for(i=0; i<c2; i++)
    {
        cout << '2';
        if(i== c2 - 1 && c3 == 0)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    for(i=0; i<c3; i++)
    {
        cout << '3';
        if(i == c3 - 1)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }

    return 0;
}