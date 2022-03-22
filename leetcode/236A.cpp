#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;int dis=0;
    cin >> n;
    // for(int i=0; i < n.length();i++){
    //     for(int j=0; j<n.length();j++){
    //         if(i==j){
    //             continue;
    //         }
    //         else{
    //             if(n[i] == n[j]){
    //                 dis++;
    //             }
    //         }
    //     }
    // }
    unordered_map<char, int> m;
 
    // traverse the string
    for (int i = 0; i < n.length(); i++) {
        // increase the frequency of character
        m[n[i]]++;
    }
 
    if(m.size() %2 ==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

    // if((n.length()-dis) %2==0){
    //     cout << "CHAT WITH HER!";
    // }   
    // else{
    //     cout << "IGNORE HIM!";
    // }
    return 0;
}