#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--){
	
		unsigned long long int row,col;
		cin >> row >> col;
		unsigned long long int ans = 0;

		if(row >= col){
			ans = (row%2) ? (row-1)*(row-1) + col : (row*row)-col+1;
		}
		
		else if(col > row){
			ans = (col%2) ? col*col-row+1 : (col-1)*(col-1)+row;
		}
		
		cout << ans << endl;
	}
	return 0;
} 
