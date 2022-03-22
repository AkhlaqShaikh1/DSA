#include <bits/stdc++.h>
using namespace std;

int main(){
    int noOfFriends,fenceHeight,width=0;
    cin >> noOfFriends >> fenceHeight;
    int heightsOfFriends[noOfFriends];
    for(int i=0; i < noOfFriends;i++){
        cin >> heightsOfFriends[i];
    }
    for(int i=0;i<noOfFriends;i++){
        if(heightsOfFriends[i]<=fenceHeight){
            width++;
        }
        else{
            width +=2 ;
        }
    }
    cout << width;
    return 0;
}