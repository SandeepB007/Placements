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
	ll int ans = 0;
	cin >> n;
	
	vector<int> list(n,0);
	
	for(int&v : list){
		cin >> v;
		ans += v;
	}
	
	// Observe the things that are constant.....
	// The sum of all items in list is constant.
	// score1 + score2 = sum
	// We want to maximize (score1 - score2)
	
	// Caution :: Both players play optimally .....
	
	vector<vector<ll int>> arr(n,vector<ll int>(n,0));
	
	// arr[l][r] denotes the max score of player1 in the interval [l,r]

	for(int i=n-1;i>=0;i--){
		for(int j=0;j<n;j++){
			if(i>j)
				continue;
			if(i==j)
				arr[i][j] = list[i];
			else
				arr[i][j] = max(list[i]-arr[i+1][j],list[j]-arr[i][j-1]);
		}	
	}	
	
	(ans += arr[0][n-1]) /= 2;
	cout << ans << "\n";
	
	return 0;
}

