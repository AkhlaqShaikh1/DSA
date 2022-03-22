#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long int check=x, temp= 0;
        if(x<0){
            return false;
        }
        while(x>0){
            temp *= 10;
            temp += x%10;
            x/=10;
        }
        if(check == temp){
            return true;
        }

        return false;
        
    }

    bool ans(){
        return true;
    }
};
int main(){
    Solution s1;
    string  ans = (s1.isPalindrome(121) == true) ? "true" : "false";
    cout << ans;
    return 0;
}