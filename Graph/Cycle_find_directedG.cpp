#include <bits/stdc++.h>
using namespace std;



bool isC(int src , vector<vector<int>> &adj , vector<bool> &visited , vector<int> &stack){

	stack[src] = true;  // mark it on stack first
	if(!visited[src]){
		visited[src] = true;
		for(auto i : adj[src]){
			if(!visited[i] and isC(i , adj , visited , stack))
			{
				return true;
			} 
			if(stack[i]){
				return true;
			}
		}

	}
	stack[src ] = false;
	return false;

}



int main(){

    int n,m; cin >> n >>m;
    vector<vector<int>> adj(n);

    for (int i = 0; i < m; ++i)
    {
    	int u , v; cin >> u >> v;
    	adj[u].push_back(v);
    }

     vector<int> stack(n , 0);
     vector<bool> visited(n,0);
    bool cycle = false;
     for (int i = 0; i < n; ++i)
     {
     	if(!visited[i] and isC(i , adj , visited , stack)){
     		cycle = true;
     	}
     }
	return 0;
}


// 4 3
// 0 1
// 1 2
// 2 1