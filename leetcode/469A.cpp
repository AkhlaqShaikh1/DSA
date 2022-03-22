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
    int n;
    cin >> n;
    vector<ll> a(n),b(n-1);
    ll arr[n];

    for(auto& i : a){
        cin >> i;
    }
    for(auto& j : b){
        cin >> j;
    }
    loop(0,a.size()-1){
        if(a[i]<=n){
            arr[i] = a[i];
        }else if(b[i] <= n){
            arr[i] = a[i];
        }
    }
    int m = sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr+m);
    bool ok = false;
    for(int i=0;i < n;i++){
        if(arr[i] == n){
            ok = true;
            break;
        
        }else{
            ok = false;
        }
    }
    if(ok){
        cout << "Oh, my keyboard!";
    }else{
        cout << "I become the guy.";
    }
            
    return 0;
}