#include <bits/stdc++.h>
using namespace std;
int lastDigitOfFibNumber(int n){
    // if(n<=1){
    //     return n;
    // }
    int dp[n];
    dp[0]=0;
    dp[1]=1;
    for (int i=2; i < n+1;i++){
        dp[i] = (dp[i-1] + dp[i-2])%10;
    }
    return dp[n];
    
}
int main(){
    int n ; cin >> n;
    cout << lastDigitOfFibNumber(n);
    return 0;
}