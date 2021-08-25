#include <bits/stdc++.h>
using namespace std;


const int m = 4;
const int n = 4;
int di[] = {1,0,-1,0};
int dj[] = {0 , 1 , 0 , -1};
void find_path(int i , int j  , int count , vector<vector<int>> &vis)
{

	if(i>= n || j >= m || i<0 || j<0 || vis[i][j] == -1) return;

    if(i == n-1 && j == m-1)
	{
		count++;
		return;
	} 

  
    vis[i][j] = 1;

    for(int x =0 ;x <4 ; x++)
	{
		count++;
		find_path(i+di[x] , j+ dj[x]  ,count , vis );

	}
	vis[i][j] = 0;
}



int main()
{

    vector<vector<int>>vis = {{0,  0, 0, 0},
                       {0, -1, 0, 0},
                       {-1, 0, 0, 0},
                       {0,  0, 0, 0}};

     int count = 0 ; 

    find_path(0 , 0 , count  , vis);

    cout << count;
    
	return 0 ; 
}