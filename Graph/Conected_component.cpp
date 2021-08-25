// Conected components is a subgraph in which any two vertices
// are connected to each by paths , abd which is connected
// to no additional vertices in the subgraph


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> components;
vector<bool> vis;


int get_com(int idx){
	if(vis[idx]){
		return 0;
	}
	vis[idx] = true;

	int ans = 1;

	for(auto i: adj[idx]){
		ans += get_com(i);
		vis[i] = true;
	}
   return ans;
}
int main(){

   int n, m ;
   cin >>n >>m;

   adj = vector<vector<int>>(n);
   vis = vector<bool>(n , 0);


   for(int i=0; i<m ;i++){
   	int u , v;
   	cin >> u >>v;

   	adj[u].push_back(v);
   	adj[v].push_back(u);

   }

   for(int i = 0; i<n ;i++){
   	if(!vis[i]){
   		components.push_back(get_com(i));
   	}
   }

   for(auto i : components){
   	cout << i << " ";
   }
 
	return 0;
}