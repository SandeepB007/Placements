/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;
/*
This is a naive approach !!!
int no_div(float x){
	
	int cnt = 0;
	int temp = (int)x;
	float sr_n = sqrt(x);
	
	for(int i=1;i<sr_n;i++){	
		if(temp % i == 0)
			cnt+=2;
	}

	// Is x a perfect square !!!
	
	if((sr_n - floor(sr_n)) == 0)
		cnt++;
	
	return cnt;
}
*/

// We will use sieve of Eratosthenes !!!

vector<int> primes(1000001,0);

void Sieve(){
	int size = primes.size();

	for(int i=2;i*i<size;i++){
		if(!primes[i]){
			for(int j=i*i;j<size;j+=i){
				if(!primes[j])
					primes[j] = i;
			}
		}	
	}

	for(int i=2;i<size;i++){
		if(!primes[i])
			primes[i] = i;
	}

	return;
}

ll no_div(int n){
	ll ans = 1;
	
	// Prime Factorization !!!
	while(n>1){		
		ll p = primes[n];
		ll cnt = 0;

		while(n%p==0){
			n/=p;
			cnt++;	
		}

		ans = ans*(cnt+1);
	}
	
	return ans;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	Sieve();
	while(n--){
		
		int x;
		cin >> x;
		
		cout << no_div(x) << "\n";
			
	}	
	
	return 0;
}

