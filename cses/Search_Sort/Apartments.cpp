#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,m,k;
	cin >> n >> m >> k;
	
	vector<int> appli(n,0),apart(m,0);

	for(int i=0;i<n;i++){
		cin >> appli[i];
	}
	
	for(int i=0;i<m;i++){
		cin >> apart[i];
	}
	
	int i=0,j=0,cnt=0;
	
	sort(appli.begin(),appli.end());
	sort(apart.begin(),apart.end());
	
	while(i<n && j<m){
		if(appli[i] < apart[j]-k)
			i++;
		
		else if ( appli[i] >= apart[j]-k && appli[i] <= apart[j]+k){
			cnt++;i++;j++;
		}
		
		else	j++;
	}
	cout << cnt << "\n";	
	return 0;
}

