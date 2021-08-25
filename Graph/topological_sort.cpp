// Topological sort is an ordering of the nodes 
// in a directed acyclic graph where for each directed
// edge node A to node B , node A comes Fist then B
// Come 


// Pseodu code 
// while(all the nodes are not visited)
     // nodes with zero indregee can be added to 
     // out put array


#include <bits/stdc++.h>
using namespace std;


int main(){

  int cnt = 0;
  vector<vector<int>> adj;
  vector<int> indeg(n , 0);

  int n, m; cin >> n >> m;


  for (int i = 0; i < m; ++i)
  {
  	  int u , v; cin >> u >> v;
        
     // u - >> v   (indegree +1 of v)

  	  adj[u].push_back(v);
  	  indeg[v]++;
  }


  queue<int> q;
  for (int i = 0; i < n; ++i)
  {
  	if(indeg[i] == 0){
  		q.push(i);
  	}
  }
  while(!q.empty()){
   cnt ++ ;
   int x = q.front();
   q.pop();
   cout << x << " ";
for(auto it : adj[x])
{
	indeg[it--];

	if(indeg[it] == 0) {
		q.push(it);
	}
}

  }
 
return   0;
}