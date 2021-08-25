#include <bits/stdc++.h>
using namespace std;


#define vi vector<int>
#define vvi vector<vi>
#define rep(i , a , b) for(int i = a; i <b; i++)

const int N = 1e5+2 , MOD = 1e9 + 7 ;



int main(){

  int n , m;
  cin >> n >> m;

   vvi adjm(n+1 , vi(n+1 , 0)); // 2D Matrix of size n+1

   rep(i ,0 , m){   // loop for taking edge
   	int x,y;

   	cin >> x >> y; // x -> start , y -> end

    adjm[x][y] = 1;  // 1 means edge is present
    adjm[y][x] = 1;

   }

   cout << "adjacency " << endl;
   rep(i , 1 , n+1){
   	rep(j , 1 , n+1){
   		cout << adjm[i][j] << " " ;
   	}
   	cout << endl;
   }
	return 0;
}


