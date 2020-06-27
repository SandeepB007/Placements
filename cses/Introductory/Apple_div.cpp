#include<bits/stdc++.h>
using namespace std;

#define ll long long int

// Recursion if n is small or Dynamic if sum of the all elements is samll....

ll fun(vector<int>a,int n,ll sum_calc,ll sum_tot){
	if(n==0)
		return abs((sum_tot - sum_calc)-sum_calc);
	else{
		return(min(fun(a,n-1,sum_calc+a[n-1],sum_tot),fun(a,n-1,sum_calc,sum_tot)));	
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> wt(n,0);
	ll sum1=0,sum2=0;

	for(int i=0;i<n;i++){
		cin >> wt[i];
		sum1 += wt[i];
	}
			
	cout << fun(wt,n,0,sum1) << endl;

	return 0;

}
