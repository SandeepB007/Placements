#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

bool cmp(pair<int,int>a,pair<int,int>b){
	return (a.second < b.second);	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n;
	cin >> n;
	vector<pair<int,int>> time;
	time.resize(n);
	
	for(int i=0;i<n;i++){
		cin >> time[i].first >> time[i].second;
	}

	//for(int i=0;i<n;i++){
	//	cout << time[i].first <<" " << time[i].second << ",";
	//}
	sort(time.begin(),time.end(),cmp);
	//cout << 1 << "\n";
	int cnt = 1;
	int r0 = time[0].second;
	for(int i=1;i<n;i++){
		int l1 = time[i].first;
		if(l1>=r0){
			cnt++;
			r0 = time[i].second;
		}
	}
	
	cout << cnt << endl;
	return 0;
}
