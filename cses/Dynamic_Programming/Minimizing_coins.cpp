#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n,x;
	cin >> n >> x;

	vector<int> den(n,0);
	vector<int> min_coins(1000005,INT_MAX);
	for(int i=0;i<n;i++){
		cin >> den[i];
	}
	min_coins[0] = 0;
	for(int i=1;i<=x;i++){
		int temp = INT_MAX;
		for(int j=0;j<n;j++){
			if(i-den[j]<0)
				continue;
			temp = min(temp,min_coins[i-den[j]]);
		}
		if(temp == INT_MAX)
			continue;
		min_coins[i] = 1;
		min_coins[i] += temp;
	}
/*	
	for(int i=0;i<=x;i++){
		if(min_coins[i] == INT_MAX)
			min_coins[i] = -1;
		cout << min_coins[i] << " ";
	}
*/
	
	if(min_coins[x] == INT_MAX)
		min_coins[x]=-1;
	cout << min_coins[x] << "\n";
	            	
	return 0;
}

