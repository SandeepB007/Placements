/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;

struct Node{
	vector<int> adj;
	bool visited = false;
	int parent = 0;
};
typedef struct Node node;

int cycles = 0;

void DFS_visit(vector<node>&vertices,int u){
	vertices[u].visited = true;
	
	for(int i=0;i<vertices[u].adj.size();i++){
		if(!vertices[vertices[u].adj[i]].visited){
			vertices[vertices[u].adj[i]].parent = u+1;
			DFS_visit(vertices,vertices[u].adj[i]);
		}

		else if(vertices[u].parent-1 != vertices[u].adj[i]){
			// there is a cycle!!!
			vector<int> ans;
			int j = u;

			while(j!=vertices[u].adj[i]){
				ans.push_back(j+1);
				j = vertices[j].parent-1;
			}
			ans.push_back(j+1);
			ans.push_back(u+1);
			cout << ans.size() << "\n";
			for(j=0;j<ans.size();j++)
				cout << ans[j] << " ";
			cout << "\n";
			exit(0);
		}
	}	

}

void DFS(vector<node>&vertices){
	
	vector<int> ans;

	for(int i=0;i<vertices.size();i++){
		if(!vertices[i].visited){
			DFS_visit(vertices,i);	
		}
	}
		
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,m;
	cin >> n >> m;
		
	vector<node> vertices(n);
	
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;
		
		vertices[a-1].adj.push_back(b-1);
		vertices[b-1].adj.push_back(a-1);	
	}
	
	DFS(vertices);
	
	cout << "IMPOSSIBLE\n";

	return 0;
}

