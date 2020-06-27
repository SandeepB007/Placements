#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unsigned long long int n;
       	cin >> n;
//	cout << n;
	unsigned long long int cnt = 0;
	unsigned long long int sum = (n*(n+1))/2;
	//cout << sum  << endl;
	n--;
	while(n--){
		int temp;
		cin >> temp;
		cnt += temp;
	}
	//cout << cnt << endl;
	cout << int(sum-cnt) << endl;
	return 0;
}
