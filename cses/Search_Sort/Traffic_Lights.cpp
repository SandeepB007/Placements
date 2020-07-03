#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n,x;
	cin >> x >> n;

	multiset<int>len = {x};
	set<int>point = {0,x};
	set<int> :: iterator curr;
	int temp = 0;
	
	while(n--){
		
		cin >> temp;
		curr = point.upper_bound(temp);

		int right = *curr;
		curr--;
		int left = *curr;
		
		len.insert(temp-left);
		len.insert(right-temp);
		
		len.erase(len.find(right-left)); // len.erase(right-left) removees all valuesof (right-left);
		
		point.insert(curr,temp);
		cout << *len.rbegin() << " ";
	}
	
	cout << "\n";
	            	
	return 0;
}

