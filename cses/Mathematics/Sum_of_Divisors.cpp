/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;

ll sum(ll n){
	
	return (((n%MOD)*((n-1)%MOD)%MOD)*((MOD+1)/2))%MOD;
		
}

// (MOD+1)/2 is the modular inverse of 2 !!!

ll sum_div(ll n){
	ll ans = 0;

	for(ll i=1;i<=n;){
		
		ll t_i = n/(n/i);

		ll s1 = sum(t_i+1);
		ll s2 = sum(i);

		ans = (ans + ((s1-s2)*((n/i)%MOD))%MOD);
		
		i = t_i+1;
	}

	return ans%MOD;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	unsigned ll n;
	cin >> n;
	
	cout << sum_div(n) << "\n";		
	return 0;
}

