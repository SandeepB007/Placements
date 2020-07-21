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
	
	int a,b;
	cin >> a >> b;
	if(a > b){
		a = a+b;
		b = a-b;
		a = a-b;	
	}
	vector<vector<int>> arr(a+1,vector<int>(b+1,0));
	

	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			int temp1 = abs(i-j), temp2 = min(i,j);
			if(i==j)
				continue;
			arr[i][j] = 1 + arr[temp2][temp1];
		}	
	}
	
	cout << arr[a][b] << "\n";

	return 0;
}

