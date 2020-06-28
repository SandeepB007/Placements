#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string Text;
	cin >> Text;

	vector<int>count(26,0);
	string First_half,sec_half;
	int cnt=0;
	for(int i=0;i<Text.size();i++){
		count[Text[i]-'A']++;
	}
	
	for(int i=0;i<26;i++){
		if(count[i]%2)
			cnt++;
	}

	if(cnt>1||(cnt==1 && !(Text.size()%2))){
		cout << "NO SOLUTION" << "\n";
		return 0;
	}
	cnt = -65;
	int len = 0;
	char ch ;
	for(int i=25;i>=0;i--){
		ch = char('A'+i);
		
		if(!(count[i]%2)){
			string temp(count[i]/2,ch);
			First_half += temp;
			sec_half += temp;	
			
		
		}
		else{
			cnt = i;
			len = count[i];
		}
	}
	
	ch = char('A'+cnt);
	string temp (len,ch);
	
	reverse(First_half.begin(),First_half.end());
	string ans = First_half + temp + sec_half;
	cout << ans << "\n";
	return 0;
}
