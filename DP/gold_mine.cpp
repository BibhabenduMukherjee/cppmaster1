#include <bits/stdc++.h>
using namespace std;


void slove()
{
	int r,c;
	cin>>r>>c;
    int profit[r+1][c+1];
	for(int i =0 ; i<r ; i++)
	{
      for (int j = 0; j < c; j++)
      {
      	cin>>profit[i][j];
      }
	}


	int dp[r+1][c+1];
	memset(dp , 0 , sizeof(dp));

	for (int j = c-1; j>=0; j--)
	{
		for(int i = 0 ; i < r ; i++)
		{
			if(j == c-1)
			{
             dp[i][j]  = profit[i][0];
			}else if(i==0)
			{
             dp[i][j] = profit[i][j] + max(dp[i][j+1]  , dp[i+1][j+1]);
			}else if(i == r-1)
			{
             dp[i][j] = profit[i][j]  + max(dp[i][j+1] , dp[i-1][j+1]);
			}else{

				dp[i][j] = profit[i][j] + max(profit[i][j+1] , max(profit[i+1][j+1] , profit[i-1][j+1]));
			}
		}
	}

    int max = dp[0][0];

    for(int i =1 ; i < r ; i++)
    {
    	if(max < dp[i][0])
    	{
         max = dp[i][0];
    	}
    }
  cout << max;
}

int main(){


    int t;
    cin>>t;
    while(t--)
    {
    	slove();
    }

	return 0;
}