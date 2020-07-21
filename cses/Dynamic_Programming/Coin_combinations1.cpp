#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n,x;
	cin >> n >> x;
	vector<int> coins(n);
	vector<int> comb(1000005,0);

	for(int i=0;i<n;i++){
		cin >> coins[i];
		comb[coins[i]]++;
	}
	
	for(int i=0;i<=x;i++){
		for(int j=0;j<n;j++){
			if(i-coins[j]<0)
				continue;
			else{
				comb[i] += comb[i-coins[j]];
				comb[i] %= MOD;	
			}	
		}	
	}
	
	cout << comb[x] << "\n";

	return 0;
}

