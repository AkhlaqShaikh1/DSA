#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[t];
    int max=arr[0];
    int n = t;
    while(t!=0){
        for(int i=0; i < t; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        cout << arr[n-2];
        t--;
    }
    return 0;
}