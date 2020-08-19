/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;

ll fun(int a, int b){
	
	if(b==0)
		return 1;
	if(b==1)
		return a%MOD;
	else{
		ll ans = (fun(a,b/2)%MOD);
		ans = (ans*ans)%MOD;
		ans = (ans*fun(a,b%2))%MOD;
		return ans;
	}
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	while(n--){
		int a,b;
		cin >> a >> b;
		
		ll ans = fun(a,b);

		cout << ans << "\n";
	}	
		
	return 0;
}
 
// Using binary operators reduces the time taken !!!

