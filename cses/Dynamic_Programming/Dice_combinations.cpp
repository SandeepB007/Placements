#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n;
	cin >> n;
	
	vector<unsigned ll> arr(1000010,0);
	arr[0]=1;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=6 && i-j>=0;j++){
			arr[i] += arr[i-j];
			arr[i] %= (int)MOD; 	
		}
	}

	cout << arr[n] << "\n";
	            	
	return 0;
}

