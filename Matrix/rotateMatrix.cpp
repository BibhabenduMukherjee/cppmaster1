#include <bits/stdc++.h>
using namespace std;

void slove()
{
	int n , m ;

	cin >> m >> n;
	int a[n+1][m+1];

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j <n ; ++j)
		{
			cin >> a[i][j];
		}
	}

  int row = 0;
  int col = 0;
  int prev , curr;

  while(row < m and col < n)
  {


  if(row+1 == m || col+1 == n)
  {
   break;
  }


  prev = a[row+1][col];

  for (int i = col; i <n ; ++i)
  {
  	curr = a[row][i];

  	a[row][i] = prev;

  	prev = curr;
  }
  row++;

   for(int i = row ; i<m ; i++ )
   {
 curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
   }
   n--;

   if(row < m)
   {

   }



  }



}


int main()
{

  int t;
  cin>>t;
  while(t--)
  {
  	slove();
  }
   

	return 0;
}