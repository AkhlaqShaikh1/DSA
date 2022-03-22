#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n ; cin >> n;
    vector<int> a(n);
    for(auto& i : a) cin >> i;
    sort(a.begin(), a.end());
    int wel =0;
    for(int j=0; j < n-1 ;j++){
        int b = a[n-1]- a[j];
        wel += abs(b);
    }
    cout << wel << endl;
    return 0;
}