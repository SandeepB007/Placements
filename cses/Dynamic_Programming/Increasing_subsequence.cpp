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
	
	vector<int> v(n,0);
	vector<vector<int>> arr(n,vector<int>(n,0));
	
	int ans = 0;

	for(int i=0;i<n;i++){
		cin >> v[i];	
	}
	
	
	for(int i=0;i<n;i++){
		int temp = v[i];
		for(int j=0;j<n;j++){
			
			if(i>j)
				continue;
			else if(i == j)
				arr[i][j]=1;

			else if(v[j] > temp){
				arr[i][j] += 1+arr[i][j-1];
				temp = v[j];
			}

			else
				arr[i][j] = arr[i][j-1];

			ans = max(ans,arr[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout << arr[i][j] << " ";
		cout << "\n";	
	}	
	
		
	cout << ans << "\n";

	return 0;
}

