/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;

void DFS_visit(vector<vector<int>>&edges,vector<int>&visited,int u){
	
	visited[u] = 1;
	
	for(int i=0;i<edges[u].size();i++){
		if(visited[edges[u][i]]==0)
			DFS_visit(edges,visited,edges[u][i]);
		
	}
		
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,m;
	cin >> n >> m;
	
	vector<int> visited(n,0);
	vector<vector<int>> edges(n);
	
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;

		edges[a-1].push_back(b-1);
		edges[b-1].push_back(a-1);
	}
	
/*
	for(int i=0;i<n;i++){
		cout << i;
		
		for(int j=0;j<edges[i].size();j++){
			cout << "->" << edges[i][j];
		}
		
		cout << "\n";
	}
*/

	vector<int> ans;

	for(int i=0;i<n;i++){
		if(visited[i]==0){
			DFS_visit(edges,visited,i);
			cnt++;
			ans.push_back(i);
		}
	}
	
	cout << ans.size()-1 << "\n";
	for(int i=1;i<ans.size();i++)
		cout << 1 << " " << ans[i]+1 << "\n";

	return 0;
}

