/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl "\n"
using namespace std;

int fun(vector<int>&no, int maxi){
	
	vector<int> cnt(maxi+1,0); // We can use this as the maxi <= 10^6.

	for(int i=0;i<no.size();i++)
		cnt[no[i]]++;
	
	for(int i=maxi;i>=1;i--){
		
		int flag = 0; // no. of numbers having i as a factor.

		for(int j=i;j<=maxi;j+=i){
			

			if(cnt[j]>1)
				return j;
			else if(cnt[j]==1)
				flag++;

			if(flag >=2)
				return i;
					
		}
			
	}
		
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int maxi = 0;

	vector<int> no(n,0);
	
	for(auto &ele:no){
		cin >> ele;
		maxi = max(maxi,ele);	
	}
	
	int ans = 0;
	
	ans = fun(no,maxi);
	
	// We just need the gcd and the not the pair of numbers !!!
	
	cout << ans << endl;
	return 0;
}

