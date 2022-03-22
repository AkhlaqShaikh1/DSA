#include <bits/stdc++.h>
using namespace std;
int counting(int n){
        int count=0;
        while(n){
            count++;
            n=n&(n-1);
            
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(counting(i));
        }
        return ans;
        
    }
int main(){
    vector<int> answer = countBits(5);
    for(int i : answer){
        cout << i;
    }
    return 0;
}