/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl "\n"
using namespace std;

/*
0.14 sec !!!
This is useful for calculating any random Pow.
*/
ll modPow(ll a, ll b, ll mod = MOD){
	
	ll ans = 1;

	while(b){
		
		if(b&1)
			ans = (ans%MOD*a%MOD)%MOD;
		
		a = (a%MOD * a%MOD)%MOD;
		b = b>>1; 
	}

	return ans%MOD;
		
}

/*
TLE
ll bin(ll a,ll b){
	
	ll ans = 1;
	ll div = 1;

	for(ll i=1;i<=b;i++){
		ans = (ans%MOD*(a-i+1)%MOD)%MOD;
		div = (div%MOD*(i%MOD))%MOD;

		//cout << ans << endl;
	}
	
	ans = (ans%MOD * modPow(div,MOD-2))%MOD;

	return ans%MOD;
		
}
*/

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int mxa = 1000001;
	vector<ll>Fact(mxa,1);
	vector<ll>inv(mxa,1);
	vector<ll>invFact(mxa,1);

	for(int i=2;i<mxa;i++){
		inv[i] = MOD-MOD/i*inv[MOD%i]%MOD; // This inv is taking 0.05 sec ?????
		
		Fact[i] = (Fact[i-1]%MOD * i%MOD)%MOD;
		invFact[i] = (invFact[i-1]%MOD * inv[i]%MOD)%MOD;
		if(i<10)
			cout << MOD/i<< " " << MOD%i << " " << inv[i] << " ";
	}
	cout << endl;
	int n;
	cin >> n;
	

	while(n--){
		
		ll a,b;
		cin >> a >> b;
		
		// Using Pascal traingle !!!
		//ll inv = (modPow(Fact[b],MOD-2)*modPow(Fact[a-b],MOD-2))%MOD;
		ll div = (invFact[b]%MOD *invFact[a-b]%MOD)%MOD;
		cout << (Fact[a]%MOD * div)%MOD << endl;
			
	}	
	
	for(int i=2;i<10;i++)
		cout << modPow(i,MOD-2) << " ";
	cout << endl;
			
	return 0;
}

