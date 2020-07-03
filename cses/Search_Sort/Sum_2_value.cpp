#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

/*
bool cmp(pair<int,int>a,pair<int,int>b){
	return(a.first <= b.first);	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n,x;
	cin >> n >> x;
	
	vector<pair<int,int>> num;
	num.resize(n);
	
	for(int i=0;i<n;i++){
		cin >> num[i].first;
		num[i].second = i+1;
	}
	
	//cout << n << " " << x << "\n";
	sort(num.begin(),num.end());
	int st=0,end=n-1;
	while(st<end){
		if(num[st].first+num[end].first == x){
			cout << num[st].second << " " << num[end].second << "\n";
			return 0;	
		}
		else if(num[st].first+num[end].first > x){
			end--;
		}
		else
			st++;
	}

	cout << "IMPOSSIBLE\n";
	return 0;
}

*/
// hashing ....

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,x;
	cin >> n >> x;

	vector<pair<int,int>> No;
	No.resize(n);

	for(int i=0;i<n;i++){
		cin >> No[i].first;
		No[i].second = i+1;
	}
	
	unordered_map <int,int> hash;

	for(int i=0;i<n;i++){
		int temp = x - No[i].first;

		if(hash.find(temp)!=hash.end()){
			cout << hash[temp] << " " << No[i].second << endl;
			return 0; 
		}
		else{
			hash[No[i].first]=No[i].second;
		}

	}
	cout << "IMPOSSIBLE\n";
	return 0;	
}

