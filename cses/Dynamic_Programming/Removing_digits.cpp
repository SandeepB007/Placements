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

	vector<int> arr(1000005,0);
	for(int i=1;i<=n;i++){
		int mini = INT_MAX;
		int temp = i;
		while(temp!=0){
			if(i-temp%10>=0 && temp%10!=0)
				mini = min(mini,arr[i-temp%10]);
			temp /=10;
		}
		arr[i] = 1+mini;
	}
	
	cout << arr[n] << "\n";
		
	return 0;
}

