#include<bits/stdc++.h>
using namespace std;


string dir = "DRUL";

int di[] = {1,0,-1,0};
int dj[] = {0 , 1 , 0 , -1};

const int n = 3;
const int m = 3;

void find_path(int i , int j , string s , vector<vector<int>> &vis)
{
	if(i>= n || j >= m || i<0 || j<0 || vis[i][j] == 1) return;

	if(i == n-1 && j == m-1)
	{
		cout << s << "\n";
		return;
	} 

	vis[i][j] =1;

	for(int x =0 ;x <4 ; x++)
	{
		s+=dir[x];
		find_path(i+di[x] , j+ dj[x] ,s , vis );
		s.pop_back();


	}

	vis[i][j] = 0;
}





// void find_path(int i , int j , string s , int n , int m)
// {
// 	if(i>= n || j>= m) return;

// 	if(i == n -1 and j == m-1)
// 	{
// 		cout <<s <<"\n";
// 		return;
// 	}

// 	s+='D';

// 	find_path(i+1 , j , s , n, m);
// 	s.pop_back();

// 	s+='R';

// 	find_path(i , j+1 , s , n,m);

// 	s.pop_back();
// }






int main(){


vector<vector<int>> vis(n , vector<int>(m , 0));

find_path(0 , 0 , "" , vis);
	return 0;
}



