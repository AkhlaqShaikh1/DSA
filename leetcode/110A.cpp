#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin >> t;
    int lucky=0;
    for(int i=0; i < t.length();i++){
        if(t[i] == '7' || t[i] == '4'){
            lucky++;
        }
    }
    if(lucky ==4 || lucky == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}