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
	
	int n,m;
	cin >> n >> m;
	
	vector<int> v(n,0);
	vector<vector<int>> arr(n,vector<int>(m,0));
	
	// Here arr[i][j] represents no. of ways of filling upto index i , if arr[i]=j...

	for(int i=0;i<n;i++)
		cin >> v[i];
	
	if(!v[0]){
		fill(arr[0].begin(),arr[0].end(),1);
	}
	else
		arr[0][v[0]-1] = 1;
	

	for(int i=1;i<n;i++){
		if(v[i]==0){
			for(int j=0;j<m;j++){
				
				arr[i][j] += arr[i-1][j];
				arr[i][j] %= MOD;
				if(j==0)
					arr[i][j] += arr[i-1][j+1];	
				else if(j==m-1)
					arr[i][j] += arr[i-1][j-1];
				else{
					arr[i][j] += arr[i-1][j-1];
					arr[i][j] %= MOD; 
					arr[i][j] += arr[i-1][j+1];
				}
				arr[i][j] %= MOD;
			}
		}
		else{
			int j = v[i]-1;
			arr[i][j] += arr[i-1][j];
			arr[i][j] %= MOD;
			if(j==0)
				arr[i][j] += arr[i-1][j+1];	
			else if(j==m-1)
				arr[i][j] += arr[i-1][j-1];
			else{
				arr[i][j] += arr[i-1][j-1];
				arr[i][j] %= MOD; 
				arr[i][j] += arr[i-1][j+1];
			}
			
			arr[i][j] %= MOD;	
		}
	}
	
	ll int ans = 0;
	
	for(int j=0;j<m;j++){
		ans += arr[n-1][j];
		ans %= MOD;
	}
	cout << ans << "\n";
	return 0;
}

