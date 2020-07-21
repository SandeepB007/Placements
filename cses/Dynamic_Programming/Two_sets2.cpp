/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	int sum = n*(n+1);
	sum /= 2;	
	
	ll int ans = 0;

	if(sum%2){
		cout << ans << "\n";
		return 0;	
	}
	sum /= 2;
	vector<vector<ll int>> arr(n,vector<ll int>(sum+1,0));

	// arr[i][j] = no. of ways of getting sum j with entries from 1 to i
	arr[0][0] = 1;
	for(int i=1;i<n;i++){
		for(int j=0;j<=sum;j++){
			(arr[i][j] += arr[i-1][j]) %= MOD;
			if(j-i >=0)
				(arr[i][j] += arr[i-1][j-i]) %= MOD;
		}
	}	

	cout << arr[n-1][sum] << "\n";

	return 0;
}

