/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
		
	string str1,str2;
	cin >> str1 >> str2;
	
	int n = str1.size() , m = str2.size();
	
	vector<vector<int>> arr(n+1,vector<int>(m+1,0));
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0)
				arr[i][j]=j;
			else if(j==0)
				arr[i][j]=i;
			else if(str1[i-1]==str2[j-1])
				arr[i][j] = arr[i-1][j-1];
			else 
				arr[i][j] = 1+min(arr[i-1][j-1],min(arr[i-1][j],arr[i][j-1]));	
		}	
	}	
/*	
	for(int i=0;i<=n;i++){	
		for(int j=0;j<=m;j++)
			cout << arr[i][j] << " ";
		cout << "\n";
	}
*/
	cout << arr[n][m] << "\n";
	return 0;
}

