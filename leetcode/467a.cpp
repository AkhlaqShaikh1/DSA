#include <bits/stdc++.h>
using namespace std;

int main(){
    int numberOfRooms;
    cin >> numberOfRooms;
    int p,q;
    int rooms=0;
    while(numberOfRooms--){
        cin >> p >> q;
        if(p<q && p+2<=q){
            rooms++;
        }
    }
    cout << rooms;
    return 0;
}