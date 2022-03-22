#include <bits/stdc++.h>
using namespace std;



long long  int FibFast(int n){
    int dp[n];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i < n+1;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;cin>>n;
    cout << FibFast(n);
    return 0;
}