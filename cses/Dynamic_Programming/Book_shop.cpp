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
	
	int n,x;
	cin >> n >> x;

	vector<int> price(n,0),pages(n,0);

	vector<vector<int>> arr(n+1,vector<int>(100005,0));
	

	for(int i=0;i<n;i++){
		cin >> price[i];
	}
		
	for(int i=0;i<n;i++){
		cin >> pages[i];	
	}
	

	for(int i=1;i<=n;i++){
		for(int j=1;j<=x;j++){
			int temp = j-price[i-1];
			arr[i][j] = arr[i-1][j];
			
			if(temp >= 0)
				arr[i][j] = max(arr[i-1][j],pages[i-1]+arr[i-1][temp]);
			
		}	
	}
		
	cout << arr[n][x] << "\n";

	return 0;
}

// Changing order of the loop changes the time complexity ???
