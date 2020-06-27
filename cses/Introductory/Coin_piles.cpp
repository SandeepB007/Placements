#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
	
		int x,y;
		cin >> x >> y;
		if((x+y)%3){
			cout << "NO" << "\n";
		}
		else{
			if(2*min(x,y) < max(x,y))
				cout << "NO" << "\n";
			else
				cout << "YES" << "\n";
		}
	}
	return 0;
}
// Code can be optimised by minimizing the if else blocks.
