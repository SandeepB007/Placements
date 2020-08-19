/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl "\n"
using namespace std;

map<ll,ll> F;

ll fib(ll n){
	
	if(F.count(n))
		return F[n];
	ll k1 = n/2;
	
	if(n%2){
		return F[n] = ((fib(k1)*fib(k1))%MOD + (fib(k1+1)*fib(k1+1))%MOD)%MOD;	
	}

	else
		return F[n] = (fib(k1)*(2*fib(k1-1)%MOD+fib(k1)))%MOD;
		
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	ll n;
	cin >> n;

	F[0]=0,F[1]=1;
	F[2]=1;
	cout << fib(n) << endl;
	return 0;
}

