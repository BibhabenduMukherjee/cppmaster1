#include <bits/stdc++.h>
using namespace std;

int main()
{
   

   int n,m;
   cin>>n >>m;
   int a[n][m];

   for (int i = 0; i <n; ++i)
   {
   	for(int j=0;j<m;j++)
   	{
   		cin>>a[i][j];
   	}
   }

   int dp[n][m];
  // memset(dp , 0 , sizeof(dp));


   for (int i = n-1; i>=0; --i)
   {
   	for(int j = m -1; j>=0 ; --j)
   	{
     if(i==n-1 and j==m-1)
     {
        dp[i][j] = a[i][j];
     }else if(i==n-1)
     {
      dp[i][j] = dp[i][j+1] + a[i][j];
     }else if(j==m-1)
     {
      dp[i][j] = dp[i+1][j] + a[i][j];
     }else
     {
     	dp[i][j] = min(dp[i + 1][j] , dp[i][j+1]) + a[i][j];
     }
   	}
   }

   cout << dp[0][0];

	return 0;
}