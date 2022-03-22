#include <bits/stdc++.h>
#define ll long long
using namespace std;
int gcdFast(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    int A = a % b;
    return gcdFast(b, A);
}

ll LCM(ll a, ll b){
    ll result = ceil(a*b)/gcdFast(a,b); 
    return result;
}
int main(){
    ll a, b;
    cin >> a >> b;
    cout << LCM(a,b);
    return 0;
}