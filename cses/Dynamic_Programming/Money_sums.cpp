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
	
	vector<int>c(n,0);
	int max_sum = 0, ans = 0;
	
	for(int i=0;i<n;i++){
		cin >> c[i];
		max_sum += c[i];	
	}
	sort(c.begin(),c.end());
	vector<vector<int>> arr(n,vector<int>(max_sum+1,0));
	arr[0][0] = 1;
	arr[0][c[0]] = 1;
	
	for(int i=0;i<=max_sum;i++)
		ans+= arr[0][i];
	
	for(int i=1;i<n;i++){
		ans = 0;
		for(int j=0;j<=max_sum;j++){
			
			int rem = (j-c[i]);
			arr[i][j] = arr[i-1][j];
			if(rem >= 0)
				arr[i][j] = arr[i-1][rem]|arr[i-1][j];
			if(i == n-1)
				ans += arr[i][j];
		}	
	}
	
	ans--;

	cout << ans << "\n";
	

	for(int i=1;i<=max_sum;i++){
		if(arr[n-1][i])
			cout << i  << " ";
	}	
	cout << "\n";

	return 0;
}

