// find there are any cycle in the graph 

// using union and find mathod 

// 1] taking a  edge list 
// 2] joining them find there are any cycle or not


#include <bits/stdc++.h>
using namespace std;
vector<int> dsuf;
int find(int v){
  if(dsuf[v] == -1) return v;

  return find(dsuf[v]);
}

void union_op(int fromP , int toP){

     fromP = find(fromP);
     toP = find(toP);
    dsuf[fromP] = toP;
}




bool isC(vector<pair<int , int>> &edge_List)
{

	for(auto p : edge_List){
      int fromP = find(p.first);
      int toP = find(p.second); 

      //  if they are in same set then fromP==toP

      if (fromP == toP)
      {
      	return true;
      }
      union_op(fromP , toP);
	}
   return false;
}

int main(){
  int E;
  int V;

  cin >>E >> V;
  dsuf.resize(V,-1);
  vector<pair<int , int>> edge_List;
  for (int i = 0; i < E; ++i)
  {
  	int from,to;
  	cin>>from>>to;
  	edge_List.push_back({from , to});
  	
  }
if(isC(edge_List))
      cout << "YES";
    else{cout << "No";}
	return 0;
}