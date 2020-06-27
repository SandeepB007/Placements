#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	long long int n;
	cin >> n;
	cout << n;
	while(n-1){
	
		n = (n%2) ?  3*n+1:n/2;
		cout << " "  << n;
	}
	cout << endl;
	return 0;
}
