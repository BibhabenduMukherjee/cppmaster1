#include <bits/stdc++.h>
using namespace std;



void DFS(int src ,  vector<vector<int>> &adj ,   vector<bool> &vis){
	vis[src] = true;
	cout << src << " " ;

	for(auto i : adj[src]){
		if(!vis[i]) {
          DFS(i , adj ,vis);
		}
	}
}

int main(int argc, char const *argv[])
{
	
    int n,m;

    cin >> n >> m;
    vector<vector<int>> adj(n);
    vector<bool> vis(n, false);


    for (int i = 0; i < m; ++i)
    {
    	int u ,v; 
    	cin >> u >> v;
    	adj[u].push_back(v);
    	
    }
   DFS(1 , adj , vis);

	return 0;
}