#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	unsigned long long int n;
	cin >> n;
	unsigned long long int cnt = 0,temp=0;
	cin >> temp;
	n--;

	while(n--){
	
		unsigned long long int x;
		cin >> x;
		if(temp > x)
			cnt+=temp-x;
		temp = max(temp,x);
	}
	cout << cnt << endl;
	return 0;
}
