#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
using namespace std;
#define ll  long long int
/* 
good logic but overflow issues cant be resolved
ll fun(int n){
    ll sum =0;
    for(int i=1; i <=n;i++){
        if(i%2==0){
            sum += 1*i;
        }
        else{
            sum+= -1*i;
        }
    }
    return sum;
}  */


int main(){
   
    ll n;
    cin>>n;
    if(n%2)
        cout<<-(n/2+1)<<endl;
    else
        cout<<n/2<<endl; 
    return 0;
}