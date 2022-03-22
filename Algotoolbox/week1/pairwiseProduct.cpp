#include <bits/stdc++.h>
using namespace std;
/* long long maxPairslow(const vector<int> &numbers){
    int n = numbers.size();
    long long result=0;
    for(int i=0;i < n;i++){
        for(int j=i+1; j < n ; j++){
            if(numbers[i]*numbers[j] > result)
                result = numbers[i]*numbers[j];
        }
    }
    return result;
} */



long long maxPair(const vector<int> &numbers ){
    int n = numbers.size();
    int maxindex=-1;
    for(int i=0;i < n;i++){
        if( (maxindex==-1) || (numbers[i]> numbers[maxindex])){
            maxindex=i;
        }
    }
    int maxindex2=-1;
    for(int j=0;j < n;j++){
        if((j!=maxindex) && ((maxindex2==-1)|| (numbers[j]>numbers[maxindex2]))){;
            maxindex2=j;
    }
    }
 return ((long long)numbers[maxindex]) * numbers[maxindex2];    
}
int main(){
     /* 
     stresTest
     while(true){
        int n = rand() % 1000+2;
        cout << n << endl;
        vector<int> a;
        for(int i=0; i < n; i++){
            a.push_back(rand() % 100000);
        }
        for(int i=0; i < n;i++){
            cout << a[i] << ' ';
        }
        cout << endl;
        long long res1 = maxPair(a);
        long long res2 = maxPairslow(a);
        if(res1!= res2){
            cout << "Wrong Answer  " << res1 << " " << res2 << endl;
            break;
        }
        else{
            cout << "OK\n";
        }

    }
    return 0;
     */

    
    int n;cin>>n; 
    vector<int> number(n);
    for(int i=0; i < n;i++){
        cin >> number[i];
    }
    long long result = maxPair(number);
    cout << result;
    return 0;
}