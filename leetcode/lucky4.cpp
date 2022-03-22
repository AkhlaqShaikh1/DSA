#include <bits/stdc++.h>
using namespace std;
int luckyFour(long long a){
    string answer = to_string(a);
    int count =0;
    for(int i=0; i< answer.length();i++){
        if(answer[i] == '4'){
            count++;
        }
    }
    return count;
}
int main(){
    int t;cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << luckyFour(n)<< endl;
    }
    return 0;
}