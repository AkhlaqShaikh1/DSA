#include <bits/stdc++.h>
using namespace std;
int linearSearch(int target,vector<int>&arr ){
    int n = arr.size();
    for(int i=0; i < n ; i++){
        if(arr[i] == target){
            return i-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {25,4,5,9,7,15};
    int ans = 4 < 5;
    cout << ans;
    return 0;
}