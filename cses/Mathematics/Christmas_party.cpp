/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl "\n"
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	int mxa = 1000001;

	ll ans = 1;
	vector<ll>dp(mxa,0);
	dp[0]=1;
	dp[1]=0;
	for(int i=2;i<=n;i++)
		dp[i] = ((i-1)*(dp[i-1]+dp[i-2]))%MOD;
	
	cout << dp[n] << endl;
			
	return 0;
}

