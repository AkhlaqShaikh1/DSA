#include <bits/stdc++.h>
#define ll long long
using namespace std;
void reverse(ll n){
    int a=0;
    string reverse = to_string(n);
    reverse = string(reverse.rbegin(),reverse.rend());
    /* int size = to_string(n).length();
    for(int i=0; i<size;i++){
        a = n%10;
        n = n/10;
        cout << a;
    } */
    cout << reverse;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        reverse(n);
        cout << endl;
    }
    
    return 0;
}