#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int>No(n,0);
	
	for(int i=0;i<n;i++){
		cin >> No[i];
	}
	sort(No.begin(),No.end());

	vector<int>::iterator ip;
	ip = unique(No.begin(),No.end());
	No.resize(distance(No.begin(),ip));

	cout << No.size() << "\n";
	return 0;
}
