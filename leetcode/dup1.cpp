#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i: nums){
            cout << i << " ";
        }

    return true;

}
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i =0;i < n;i++){
        cin >> a[i];
    }
    containsDuplicate(a);
    return 0;
}