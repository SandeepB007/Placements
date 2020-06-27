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
	cnt = -1;
	for(int i=25;i>=0;i--){
		char ch = char('A'+i);
		//cout << count[i] << " ";
		if(!(count[i]%2)){
			string temp(count[i]/2,ch);
			First_half += temp;
			sec_half += temp;	
			
			//cout << ch <<" " << temp  << "\n";
		
		}
		else
			cnt = i;
	}
	//cout << First_half << " " << sec_half << "\n";
	string ch = "";
	if(cnt>=0){
		ch = char('A'+cnt);
		//cout << ch << "\n";
	}
	reverse(First_half.begin(),First_half.end());
	string ans = First_half + ch + sec_half;
	cout << ans << "\n";
	return 0;
}
