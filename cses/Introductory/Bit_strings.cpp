#include<bits/stdc++.h>
using namespace std;

//#define long long int long long int
#define MOD 1000000007

long long int fun(long long int n){
	if(n<=0)
		return 1;
	else if(n==1)
		return 2;
	else{
		long long int ln = log2(n);
		long long int prod = 2;
		long long int rem = n - pow(2,ln);
		while(ln--){
			prod = (prod*prod)%MOD;
		}
	
		prod = (prod*fun(rem))%MOD;

		return prod;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	long long int n;
	cin >> n;

	long long int ans = fun(n);
	cout << ans << "\n";

	return 0;
}
