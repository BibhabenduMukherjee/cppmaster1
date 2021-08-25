#include <bits/stdc++.h>
using namespace std;

const int INF = 10e9;

int main(int argc, char const *argv[])
{
	
    int n , m ;
    cin >> n >> m;

    vector<vector<int> edgs;
    vector<int> dist(n , INF);


    for(int i = 0; i<m ; i++){
    	int u , v , w;
    	cin >> u >> v >>w;
        
        edgs.push_back({u,v,w});

    }
    
    int src ;
    cin>>src;
    dist[src] = 0;


for(int i = 0; i<n-1; i++){
    for(auto it : edgs){
    	int u = it[0];
    	int v = it[1];
    	int w = it[2];

    	dist[v]= min(dist[v] , w+dist[u]);

    }
}
for(auto i : dist){
	cout << i <<" ";
}cout << "\n";


	return 0;
}