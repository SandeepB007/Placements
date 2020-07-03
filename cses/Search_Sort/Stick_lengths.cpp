#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n;
	cin >> n;

	// We have to find the median

	vector<int> length(n,0);
	for(int i=0;i<n;i++)
		cin >> length[i];
	
	sort(length.begin(),length.end());
	int med = length[n/2];
	
	ll ans = 0;

	while(n--){
		ans += abs(length[n]-med);
	}
	cout << ans << "\n";
	
	return 0;
}

