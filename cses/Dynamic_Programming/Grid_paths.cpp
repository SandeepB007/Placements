/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long;

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;

	char grid[n][n];
	int arr[n][n];
	char temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> grid[i][j];
			arr[i][j] = 0;
		}
	}

	// need an easier way to cin the grid !!!
	if(grid[0][0]=='.')
		arr[0][0]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(grid[i][j] == '.'){		
				if(i-1 >= 0)
					arr[i][j] += arr[i-1][j];	
				if(j-1 >= 0)
					arr[i][j] += arr[i][j-1];
			}
			arr[i][j] %= MOD;
		}
	}

	cout << arr[n-1][n-1] << "\n";
	return 0;
}

