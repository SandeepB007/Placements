#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n;
	cin >> n;
	
	vector<int> arr(n,0);
	for(int i=0;i<n;i++)
		cin >> arr[i];

	map<int,int> playlist;
	int j=0,i=0,ans=0,cnt=0;
	
	while(i<n){
		if(playlist.find(arr[i])==playlist.end() || playlist[arr[i]]==0){
			playlist[arr[i]]++;
			cnt++;
			ans = max(cnt,ans);
			i++;
		}
		else{
			playlist[arr[j]]--;
			cnt--;
			j++;
		}
	}
	ans = max(ans,cnt);
	cout << ans << "\n";
	return 0;
}

