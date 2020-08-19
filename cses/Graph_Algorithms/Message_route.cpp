/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;

void BFS(vector<vector<int>>&edges,vector<int>&color,vector<int>&parent,int u){
	
	queue<int> temp;
	color[u] = 1;
	temp.push(u);

	while(!temp.empty()){
		int v = temp.front();
		temp.pop();
		
		for(int i=0;i<edges[v].size();i++){
			if(color[edges[v][i]] == 0){
				temp.push(edges[v][i]);
				color[edges[v][i]] = 1;
				parent[edges[v][i]] = v+1;
			}
		}	
		
		color[v] = 2;
	}
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,m;
	cin >> n >> m;
	
	vector<vector<int>>edges(n);
	vector<int>color(n,0);
	vector<int>parent(n,0);
		
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;

		edges[b-1].push_back(a-1);
		edges[a-1].push_back(b-1);
	}

	BFS(edges,color,parent,0);
	
	if(color[n-1] == 0)
		cout << "IMPOSSIBLE\n";
	
	else{
		int v = n-1;
		vector<int>ans;
		ans.push_back(v+1);
		vector<int> :: reverse_iterator it;
		while(parent[v]!=0){
			ans.push_back(parent[v]);
			v = parent[v]-1;
		}

		cout << ans.size() << "\n";

		for(it = ans.rbegin();it!=ans.rend();it++)
			cout << *it << " ";
		cout << "\n";

	}
	
	return 0;
}

