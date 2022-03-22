#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;cin >> t;
    for(int i=0; i < t;i++){
        int n;
        cin >> n;
        ll sum=0;
        while(n>0){
            sum+= n%10;
            n =  n/10;
        }
        cout << sum;
        
    }

    return 0;
}