/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl "\n"
using namespace std;

ll modPow(ll a, ll b , ll mod = MOD){
	
	ll ans = 1;

	while(b){
		
		if(b&1)
			ans = (ans%mod * a%mod)%mod;

		a = (a%mod * a%mod)%mod;
		b = b>>1;
	}	

	return ans%mod;
	
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,m;
	cin >> n >> m;
	
	ll ans = 1;
	ll div = 1;
	n--;
	// swapping
	if(n > m){
		n = n+m;
		m = n-m;
		n = n-m;	
	}
	
	for(int i=1;i<=n;i++){
		
		ans = (ans*(i+m))%MOD;
		div = (div*(i))%MOD;
			
	}
	
	//cout << ans << " " << div << " " << modPow(div,MOD-2) << endl;
	//cout << (div*modPow(div,MOD-2))%MOD << endl;

	ans = (ans*modPow(div,MOD-2))%MOD;
	
	cout << ans << endl;
		
	return 0;
}

