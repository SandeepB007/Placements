/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl "\n"
using namespace std;

ll modPow(ll a, ll b, ll mod = MOD){

//      cout << "Entered Function\n";

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

// This is possible as MOD is a prime and using fermats little theorm !!!
ll mod_inv(ll n){
	// n < MOD !!!
	// inv of a is a^(m-2) as a^(m-1) = 1 mod m
	// modpower(n,MOD-2);
	return modPow(n,MOD-2);
	//return 1;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	int n = s.size();
	vector<int>cnt(26,0);
	
	for(int i=0;i<n;i++)
		cnt[s[i]-'a']++;
	
	int mxa = 1000001;

	
	vector<ll> Fact(mxa,1);
	vector<ll> invFact(mxa,1);
	vector<ll> inv(mxa,1);
	

	for(int i=2;i<=n;i++){
		inv[i] = MOD-MOD/i*inv[MOD%i]%MOD;
		Fact[i] = (Fact[i-1]*i)%MOD;
		invFact[i] = (invFact[i-1]*inv[i])%MOD;
	}
	ll ans = Fact[n];
	for(int i=0;i<26;i++){
		ans = (ans*invFact[cnt[i]])%MOD;	
	}

	cout << ans << endl;

	// Multiplying with individual inverses !!!

/*	
	// Multiplying the whole denominator and finding its inverse !!! NOT WORKING FOR SOME CASES !!!

	sort(cnt.begin(),cnt.end());
	
	//for(auto &ele:cnt)
	//	cout << ele <<" ";
	//cout << endl;

	ll ans = 1;
	ll div = 1;
	
	int j = 0;

	for(int i=0;i<26;i++){
		if(cnt[i]!=0){
			j = i;
			break;
		}
	}
	
	//cout << j << endl;
	int flag = 1;
	for(int i=1;i<=n;i++){
		
		ans = (ans*i)%MOD;
		
		while(cnt[j] == i){
			flag = 0;
			div = (div*ans)%MOD;
	//		cout << cnt[j] << " " << div << endl;
			j++;
			if(j >=26 )
				break;
		}	
		
	//	if(flag == 0){
	//		cout << ans << " Exited Loop\n";
	//		flag = 1;
	//	}

	}
		
	ans = (ans * mod_inv(div))%MOD;
	
	//cout << (div*mod_inv(div))%MOD << endl;

	cout << ans << endl;
*/
	return 0;
}

