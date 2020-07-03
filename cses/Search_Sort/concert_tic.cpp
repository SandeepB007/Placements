#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int
/*
int bin_srch(vector<int>a,int st,int end,int key){
	int mid = 0,flag=0;
	if(a.empty())
		return -1;
	while(st<=end){
		mid = st + (end-st)/2;
		//cout << st << " " << end <<" "<<mid << "\n";

		if(key == a[mid])
			return mid;
		else if(key > a[mid]){
			st = mid+1;
			flag = 1;		
		}
		else{
			end = mid-1;
			flag = 2;
		}
	}

	//cout << flag << "\n";
	
	if(st >= a.size())
		return a.size()-1;
	if(end < 0)
		return -1; 

	if(flag == 1)
		return mid;
	if(flag == 2)
		return mid-1;	
		
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n,m;
	cin >> n >> m;
	
	vector<int> price(n,0),time(m,0);
	
	for(int i=0;i<n;i++){
		cin >> price[i];
	}
	
	for(int i=0;i<m;i++){
		cin >> time[i];
	}
	
	sort(price.begin(),price.end());
	//for(int i=0;i<price.size();i++)
	//	cout << price[i] << " ";
	//cout << "\n";	
	int i=0;

	while(i<time.size()){
		//cout << price.size() << "\n";
		int index = bin_srch(price,0,price.size()-1,time[i]);
		//cout << index << "\n";
		if(index < 0)
			cout << index << "\n";
		else{
			cout << price[index] << "\n";
			price.erase(price.begin()+index);
		}
		i++;

		//for(int j=0;j<price.size();j++)
		//	cout << price[j] << " ";
		//cout << "\n";
	}	
	//cout << price[bin_srch(price,0,price.size()-1,time[0])] << "\n";
	
	return 0;
}
*/


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	int n,m;
	cin >> n >> m;
	
	multiset<int> ticket;
	multiset<int> :: iterator it;
	int temp;

	while(n--){
		cin >> temp;
		ticket.insert(temp);
	}

	while(m--){
		cin >> temp;
		it = ticket.upper_bound(temp);
		
		if(it == ticket.begin())
			cout << -1 << "\n";
		else{
			it--;
			cout << *(it) << "\n";
			ticket.erase(it);
		}
	}
	return 0;
}
