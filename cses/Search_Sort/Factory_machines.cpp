#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	unsigned ll  n,t;
	cin >> n >> t;

	map<unsigned ll,unsigned ll> machine;
	map<unsigned ll,unsigned ll> :: iterator it,it1;
	
	unsigned ll temp1 = 0,temp = 0;
	while(n--){
		cin >> temp;
		machine[temp]++;	
	}
	
	it = machine.begin();

	unsigned ll l=0,r= ((t/(*it).second)+t%(*it).second)*(*it).first;
/*	
	for(it = machine.begin();it!=machine.end();it++){
		temp += (*it).second;
		(*it).second = temp; 	
	}
*/	
	unsigned ll  mid = (l+r)/2;
	int flag = 0;
	while(l<=r){
		temp = 0;
		it1 = machine.upper_bound(mid);
		for(it = machine.begin();it!=it1;it++){
			temp += (mid/(*it).first)*(*it).second;	
		}

//		cout << l << " " << r << " " << mid << " " << temp << "\n";
		if(t == temp){
			flag = 1;
			break;
		}
		if(t < temp){
			flag = 1;
			r = mid - 1;
		}
		else if(t > temp){
			flag = 2;
			l = mid + 1;
		}
		if(l<=r){
			temp1 = mid;
			mid = (l+r)/2;
		}
	}
//	cout << flag << " " << mid << "\n";
	if(flag == 1)
		cout << mid << "\n";
	
	if(flag == 2)
		cout << temp1 << "\n";
	return 0;
}

