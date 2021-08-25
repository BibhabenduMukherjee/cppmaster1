#include <bits/stdc++.h>
using namespace std;




bool isCy(int src , vector<vector<int>> &adj , vector<bool> &visited , int Parent){

	visited[src] = true;

	for(auto i : adj[src]){
        if(i != Parent){
		if(visited[i]) return true;

		if(!visited[i] and isCy(i , adj , visited , src)){
			return true;
		}
    }
	}

	return false;
}
   



int main(){




   int n, m ; cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<bool> visited(n , false);

   for (int i = 0; i < m; ++i)
   {
        int u , v ; cin >>u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);


   }
    bool cycle = false;

     for(int i =0 ; i<n; i++){
     	if(!visited[i]  and isCy( i , adj , visited ,  -1))
     	{
     		cycle = true;
     	}
     }

     if(cycle) cout << "Yes Cycle is Present in the graph";

     else{
     	cout << "No cycle is not Present in the graph";
     }

	return 0;
}

// input  
// 4 3

// 0 1

//1 2

//2 0 
