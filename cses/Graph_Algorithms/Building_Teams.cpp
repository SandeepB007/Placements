/*

Author 	: Bond007

*/

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;

// Check if the graph is bipartite !!! We have to use BFS ....

int cycles = 0;

struct Node{
	vector<int> adj;
	int color = 0;
	int parent = 0;
	int team = 1;	
};

typedef struct Node node;

void BFS_visit(vector<node>&vertices,int u){
	vertices[u].color = 1;
	queue<int> temp;
	temp.push(u);
	while(!temp.empty()){
		int v = temp.front();
		for(int i=0;i<vertices[v].adj.size();i++){
			if(vertices[vertices[v].adj[i]].color == 0){
				vertices[vertices[v].adj[i]].color = 1;
				vertices[vertices[v].adj[i]].parent = v+1;
				vertices[vertices[v].adj[i]].team = vertices[v].team%2+1;
				temp.push(vertices[v].adj[i]);
			}
			
			else if(vertices[v].team == vertices[vertices[v].adj[i]].team){
				cycles++;
				return;
			}	
		}
		temp.pop();
		vertices[u].color = 2;	
	}	
}

void BFS(vector<node>&vertices){
	
	for(int i=0;i<vertices.size();i++){
		if(vertices[i].color == 0){
			BFS_visit(vertices,i);	
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
	
	BFS(vertices);
	if(cycles > 0)
		cout << "IMPOSSIBLE\n";
	else{
		for(int i=0;i<n;i++)
			cout << vertices[i].team << " ";
		cout << "\n";	
	}
	return 0;
}

