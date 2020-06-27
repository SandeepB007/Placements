#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long int n;
	cin >> n;

	// Number of ways 2 knights can be placed to attck themselves = number of 2X3 or 3X2 rectangles in an nXn chessboard.
	// no_of_2x3 = n-1*n-2, no_of_3x2 = n-2*n-1.
	// no_of ways to attack = 2*(2(n-1)(n-2))
	for(long long int i=1;i<=n;i++){
		long long int nSquare_c_2 = (i*i*(i*i-1))/2;
		long long int attack = 4*(i-1)*(i-2);
		cout << (nSquare_c_2-attack) << "\n";
	}

	return 0;
}
