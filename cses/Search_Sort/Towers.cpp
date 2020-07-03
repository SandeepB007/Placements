#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int bin_srch(vector<int>&cube,int x){
	
	int l = 0, r = cube.size()-1;
	int pos = -1;

	while(l<=r){
		int m = l+(r-l)/2;
		if(cube[m] > x){
			pos = m;
			r = m-1;	
		}
		else
			l = m+1;
	}

	return pos;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n;
	cin >> n;
/*
	multiset<int> cubes;
	multiset<int> :: iterator it;
	int cnt = 0,temp;
	while(n--){
		cin >> temp;
		cubes.insert(temp);
		
		it = cubes.upper_bound(temp);

		if(it == cubes.end())
			cnt++;
		else
			cubes.erase(it);
	}
	
	cout << cnt << "\n";	
	return 0;
	*/
	
	vector<int> cube;
	int temp;

	while(n--){
		
		cin >> temp;
		int i = bin_srch(cube,temp);

		if(i==-1)
			cube.push_back(temp);
		else
			cube[i]=temp;

	}

	cout << cube.size() << "\n";
	return 0;
}

