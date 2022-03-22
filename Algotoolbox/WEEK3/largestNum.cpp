#include <bits/stdc++.h>
using namespace std;

vector<long long> largestNumber(const vector<long long>arr){
    vector<long  long> result;
    int best=0;
    for(int i=0; i < arr.size();i++){
        if(arr[i]>best){
            best = arr[i];
        }
        result[i] = best;
    }
    return result;
}
int main(){
    int n;cin >>n;
    vector<long long> arr(n);
    for(int i=0; i < n;i++){
        cin >> arr.at(i);
    }

    vector<long long> answ = largestNumber(arr);
    for(int i=0; i < n;i++){
        cout << answ[i];
    }

    return 0;
}