#include <bits/stdc++.h>
using namespace std;
long long sumOfLast(long long n){
    //(f0+f1+f2+....+fn)%10
    n = (n+2)%60;
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    // int res =1;
    for(int i=2;i < n+1;i++){
        dp[i] = (dp[i-1] + dp[i-2])%10;
    }
    if(dp[n]==0){
        return 9;
    }
    
    return (dp[n]%10-1);
}
int main(){
    long long n; cin >> n;
    cout << sumOfLast(n);
    return 0;
}