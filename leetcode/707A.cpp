#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,size;
    cin >> n >> m;
    size = n*m;
    // string arr[n][m];
    // for(int i=0; i < n ; i++){
    //     for(int j=0; j < m;j++){
    //         cin >> arr[i][j];
    //     }
    // }   
    int c=0,b=0;
    // for(int i=0; i < n ;i++){
    //     for(int j=0; j < m ;j++){
    //         if(arr[i][j] == "C" ||arr[i][j] == "M" || arr[i][j] =="Y"){
    //             c++;
    //         }
    //         else{
    //             b++;
    //         }
    //     }
    // }
    while(size--){
        char a;
        cin >> a ;
        if(a == 'C' || a == 'M' || a== 'Y'){
            c++;
        }
        else{
            b++;
        }
    }
    if(c == 0 and b>0){
        cout << "#Black&White" << endl;        
    }
    else if(c>0){
        cout << "#Color" << endl;
    }
    return 0;
}