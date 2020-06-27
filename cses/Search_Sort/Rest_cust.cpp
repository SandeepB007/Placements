#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n;
	cin >> n;
	
	vector<int> a(n,0),b(n,0);
	
	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	int i=0,j=0,cnt=0,ans=0;
	while(i<n && j<n){
		if(a[i]<b[j]){
			i++,cnt++;
		}
		else if(a[i]>=b[j]){
			j++,cnt--;
		}
		ans = max(ans,cnt);
	}
	
	cout << ans << "\n";
	return 0;
}

