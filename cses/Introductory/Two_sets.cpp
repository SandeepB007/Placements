#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	long long int n;
	cin >> n;
	
	long long int sum = (n*(n+1))/2;
	if(sum%2){
		cout << "NO" << "\n";
	}

	else{
		cout << "YES" << "\n";
		sum/=2;
		
		vector<long long int>s1;
		vector<long long int>s2;
		while(n--){
			if(sum >= n+1){
				sum = sum-(n+1);
				s1.push_back(n+1);
			}

			else{
			
				s2.push_back(n+1);
			}
		}

		cout << s1.size() << "\n";
		for(long long i=s1.size()-1;i>=0;i--){
			cout << s1[i] << " ";
		}
		cout << "\n" << s2.size() << "\n";
		for(long long i=s2.size()-1;i>=0;i--){
			cout << s2[i] << " ";
		}
		cout << "\n";
	}
	
	
	return 0;
}
