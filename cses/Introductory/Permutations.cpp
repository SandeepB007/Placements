#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	if(n==1){
		cout << 1 << endl;
		return 0;
	}
	if(n<=3){
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	int mid = (n%2) ? (n/2)+1:(n/2);
	int st = 1,en = mid+1;
	
	if(n%2){
		while(en <= n && st <= mid){
			cout << st << " " << en << " ";
			en++,st++;
		}
		cout << mid;
	}
	
	else{	
		while(en <= n && st <= mid){
			cout << en << " " << st << " ";
			en++,st++;
		}
	}
	
	cout << endl;
	return 0;
}
