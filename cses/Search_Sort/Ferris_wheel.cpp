#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n,x;
	cin >> n >> x;

	vector<int> wts(n,0);
	for(int i=0;i<n;i++){
		cin >> wts[i];
	}

	sort(wts.begin(),wts.end());

	int cnt = 0,st = 0,end = n-1;
	while(st<end){
		if(wts[st]+wts[end]<=x){
			st++,end--,cnt++;
		}
		else if(wts[st]+wts[end]>x){
			end--,cnt++;
		}
	}
	if(st == end)
		cnt++;
	
	cout << cnt << "\n";
	return 0;
}

