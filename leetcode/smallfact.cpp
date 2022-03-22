#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll smallFact(ll n){
    ll fact=1;
    for(int i=1; i<=n;i++){
        fact*=i;
    }
    return fact;
    
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;cin >>n;
        cout << smallFact(n);
    }
    return 0;
}