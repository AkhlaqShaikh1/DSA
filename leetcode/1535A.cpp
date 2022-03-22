#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;cin >> tt;
    while(tt--){
        int s1,s2,s3,s4;
        bool fair = false;
        cin >> s1 >> s2 >> s3 >> s4;
       
        if(min(s1,s2) > max(s3,s4) || max(s1,s2) < min (s3,s4)){
            fair = false;
        }
        else{
            fair = true;
        }
        
        if(fair){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }   
    return 0;
}