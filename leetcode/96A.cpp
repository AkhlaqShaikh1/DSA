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
    string t;
    cin >> t;
    bool dang=false;
    string a = "0000000" , b = "1111111";
    // for(int i=0; i < t.length(); i++){
        // if((t[i] == t[i+1]) && (t[i+1] == t[i+2]) && (t[i+2] == t[i+3]) and (t[i+3] == t[i+4]) and (t[i+4] == t[i+5]) and (t[i+5] == t[i+6]) ){
        //     dang = true;
        //     break;
        // }
        if(t.find(a) != t.npos || t.find(b) != t.npos){
            dang = true;
        }
        else{
            dang = false;
        }
    // }
    if(dang)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}