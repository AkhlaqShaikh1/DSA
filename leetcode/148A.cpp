#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll lcm2(ll a,ll b){return (a*b)/ __gcd(a,b);}
ll lcm3(ll a, ll b, ll c){ return lcm2(a,lcm2(b,c));}
ll lcm4(ll a,ll b, ll c, ll d){ return lcm2(lcm2(a,b), lcm2(c,d));}

int main(){
    ll k,l,m,n,d,ans=0, n1,n2,n3,n4;
	cin>>k>>l>>m>>n>>d;
	n1=d/k +d/l +d/m +d/n;
	n2=d/lcm2(k,l)+d/lcm2(k,m)+d/lcm2(k,n)+d/lcm2(l,m)+d/lcm2(l,n)+d/lcm2(m,n);
	n3=d/lcm3(k,l,m)+d/lcm3(k,l,n)+d/lcm3(k,m,n)+d/lcm3(l,m,n);
	n4=d/lcm4(k,l,m,n);
	ans=n1-n2+n3-n4;
	cout<<ans;
}