#include <bits/stdc++.h>
using namespace std;

int DPChange(int money, vector<int>&coins){
    vector<int> minChanges(money+1);
    int numCoins;
    minChanges[0] = 0;
    for (int m = 1; m <=money; m++)
    {
        minChanges[m] = 10001;
        for (int i = 0; i <coins.size() ; i++)
        {
            /* code */
            if(m>=coins[i]){
                numCoins = minChanges[m-coins[i]]+1;
                if(numCoins<minChanges[m]){
                    minChanges[m] = numCoins;
                }
            }
        }
        
    }
    return minChanges[money];
    
}
int main(){
    vector<int> coin = {1,3,4};
    int n;
    cin >> n;
    cout << DPChange(n,coin);

    return 0;
}