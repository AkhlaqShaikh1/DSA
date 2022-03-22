#include <bits/stdc++.h>
using namespace std;

int main(){
    int numberOfFriends,k;
    cin >> numberOfFriends;
    int giftsGiven[numberOfFriends+1];
    for(int i=1; i <= numberOfFriends ;i++){
        cin >> k;
        giftsGiven[k] = i;
    }
    for(int i=1; i<= numberOfFriends ; i++){
        cout << giftsGiven[i]  << " ";
    }
    return 0;
}   