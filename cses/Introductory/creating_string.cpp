#include<bits/stdc++.h>
using namespace std;
/*
bool check(string a,int st,int curr){

	for(int i=st;i<curr;i++){
	
		if(a[i]==a[curr])
			return 0;
	}

	return 1;
}

int fac(int n){
	if(n==1)
		return 1;
	return n*fac(n-1);
}

void Perm(string a, int index, int end){

	if(index>=end)
		cout << a << endl;
	else{
	
		for(int i=index;i<=end;i++){
			if(check(a,index,i)){
				swap(a[index],a[i]);
				Perm(a,index+1,end);
				swap(a[index],a[i]);
			}
		}
	}
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string Text;
	cin >> Text;

	vector<int> count(26,0);
	// Done by so called BackTracking......
	for(int i=0;i<Text.size();i++){
		count[Text[i]-'a']++;
	}
	int n = Text.size();
	int cnt = fac(n);
	
	for(int i=0;i<26;i++){
		if(count[i]>1)
			cnt = cnt/fac(count[i]);
	}
	sort(Text.begin(),Text.end());
	cout << cnt << "\n";
	Perm(Text,0,n-1);
	return 0;
}*/
//  The above algo does not give lexicographic order.....(Backtracking)

// This algo gives lexicographic order....

int fun(string Text){
	int index = 0;
	for(index = Text.size()-2;index >= 0;index--){
		if(Text[index] < Text[index+1])
			break;
	}
	return index;
}

int fun_1(string Text,int index){
	int temp=0;
	for(temp = Text.size()-1;temp > index;temp--){
		if(Text[temp] > Text[index])
			break;	
	}
	return temp;
}


int fac(int n){
	if(n==1)
		return 1;
	return n*fac(n-1);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string Text;
	cin >> Text;
//	cout << Text << "\n";
	
	vector<int>count(26,0);
	for(int i=0;i<Text.size();i++){
		count[Text[i]-'a']++;
	}
	int cnt = fac(Text.size());
	
	for(int i=0;i<26;i++){
		if(count[i]>1)
			cnt = cnt/fac(count[i]);
	}
	
	cout << cnt << "\n";

/*	sort(Text.begin(),Text.end());

	cout << Text << "\n";
	
	int index = 0;
	index = fun(Text);
	//cout << index << " ";
	//int n = 5;
	while(index>=0){
		int temp = fun_1(Text,index);
	//	cout << temp << " ";
		swap(Text[index],Text[temp]);
		//cout << Text << " ";
		reverse(Text.begin()+index+1,Text.end());
		cout << Text << "\n";
		index = fun(Text);
	//	cout << index << " ";
	}

*/
	// INBUILT FUNCTIONS...	
	sort(Text.begin(),Text.end());
	do {
    		cout << Text << "\n";
	} while (std::next_permutation(std::begin(Text), std::end(Text)));
	
	return 0;	
}


