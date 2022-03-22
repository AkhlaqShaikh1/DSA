#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int py =0 , h=0;
    while (py <= n){
        h++;
        py += (h*(h+1)) / 2;
    }
    cout << h-1 << endl;
    return 0;
}