#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string DNA;
	cin >> DNA;
	
	int cnt = 1,temp=1;
	for(int i=1;i<DNA.size();i++){
		temp = 1;
		while(i<DNA.size() && DNA[i]==DNA[i-1]){
			temp++;
			i++;
		}
		cnt = max(cnt,temp);
	}
	cout << cnt << endl;
	return 0;
}
