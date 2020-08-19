/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;

// Fast exponentiation !!!

ll fun(ll a, ll b, ll mod = MOD){

//	cout << "Entered Function\n";

	ll ans = 1;
	while(b){
		//cout << "Entered Loop\n";
		if(b&1)
			ans = ((ans%mod)*(a%mod))%mod;
		
		a = (a%mod*a%mod)%mod;
		b = b >> 1;
	}

	return ans % mod;
		
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	while(n--){
		
		ll a,b,c;
		cin >> a >> b >> c;
		//cout << "HI\n";
		ll temp = fun(b,c,MOD-1);
		cout << fun(a,temp) << "\n";
		
	}	
		
	return 0;
}

// Here this worked as MOD is prime and we used Fermats Little Theorm !!!
// a^(p-1) mod p = 1, So we calculated b^c mod(p-1) and calculated a^ modp !!!
