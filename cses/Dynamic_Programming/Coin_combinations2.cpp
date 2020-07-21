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
		
	int n,x;
	cin >> n >> x;
	
	vector<int> c(n,0);
	vector<vector<int>> arr(n+1,vector<int>(1000005,0));
	
	for(int&v : c)
		cin >> v;
	
	sort(c.begin(),c.end());
	arr[0][0] = 1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=x;j++){
			int rem = j - c[i-1];
			arr[i][j] = arr[i-1][j];
			
			if(rem >= 0)
				arr[i][j] += arr[i][rem];
			
			arr[i][j] %= MOD;	
		}	
	}

	cout << arr[n][x] << "\n";
		
	return 0;
}

