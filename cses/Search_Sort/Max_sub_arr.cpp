#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n;
	cin >> n;
	
	vector<int> num(n,0);
	
	for(int i=0;i<n;i++)
		cin >> num[i];
		
	ll ans = INT_MIN, sum = 0;
	
	for(int i=0;i<n;i++){
		sum += num[i];
		ans = max(ans,sum);
		if(sum < 0)
			sum = 0;	
	}
	cout << ans << "\n";            	
	return 0;
}

