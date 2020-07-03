#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int

int fun(string path,int x,int y,int chr){
//	cout << x << " " << y << " " << chr << "\n";
	if(chr==48){
		if(x==6&&y==0)
			return 1;
		else{
//			cout << "Case 1\n";
			return 0;
		}
	}
	if(x==6 && y==0){
//		cout << " Case 2\n";
		return 0;
	}
	if(x>6 || x<0 || y<0 || y>6){
//		cout << " Case 3\n";
		return 0;
	}
	if(path[chr] == '?')
		return fun(path,x+1,y,chr+1)+fun(path,x-1,y,chr+1)+fun(path,x,y-1,chr+1)+fun(path,x,y+1,chr+1);
	else if(path[chr] == 'R')
		return fun(path,x,y+1,chr+1);
	else if(path[chr] == 'L')
		return fun(path,x,y-1,chr+1);
	else if(path[chr] == 'D')
		return fun(path,x+1,y,chr+1);
	else if(path[chr] == 'U')
		return fun(path,x-1,y,chr+1);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	string path;
	cin >> path;
	
	cout << path << "\n";

	int ans = fun(path,0,0,0);

	cout << ans  << "\n";
	            	
	return 0;
}

