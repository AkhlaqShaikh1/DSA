#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */
// a = 1 2 3 4
void reverseArray(vector<int> a) {
    vector<int> rev(a.size(),0);
    for(int i=1; i <=a.size();i++){ // i=1 ; i=2; i =3 ; i=4
        rev[i-1] = a[a.size()-i]; // rev[0] = a[3]; rev[1] = a[2] ; rev[2] = a[1]; rev[3] = a[0]; 
    }
    
    for(auto j: rev){
        cout << j << " ";
    }
}

int main()
{
    int n;
    cin >>n;
    vector<int> a;
    for(int i=0; i < n;i++){
        int b;cin>>b;
        a.push_back(b);
    }
    reverseArray(a);
    // vector<int> reve = reverseArray(a);
    // for(auto& j: reve){
    //     cout << j;
    // }
    return 0;
}


