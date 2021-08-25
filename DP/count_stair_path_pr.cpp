#include <bits/stdc++.h>
using namespace std;

// how many paths from n to 0
// taking 1 or 2 or 3 step at a time


// int slove(int n , int dp[]){

   
//     if(n==0){return 1;}
//     else if(n<0)
//     {
//     	return 0 ;
//     }

//     if(dp[n] > 0)
//     {
//     	return dp[n];
//     }

// 	int p1 = slove(n-1 , dp);
// 	int p2 = slove(n-2 ,dp);
// 	int  p3 = slove(n-3,dp);
   
//    int c = p3+p2+p1;

//    dp[n] = c;
   
//    return c;

// }

int tabulation(int n  )
{
int dp_tab[n+1];
memset(dp_tab , 0 , sizeof(dp_tab));

	dp_tab[0] = 1;  // count path from 0 t0 0 

	// dp_tab[i] // express that path count from i to 0


	for (int i = 1; i <=n; ++i)
	{
		if(i==1)
		{
			dp_tab[i] = dp_tab[i-1];
		}else if(i==2)
		{
			dp_tab[i] = dp_tab[i-1] + dp_tab[i-2];

		}else
		{
		dp_tab[i] = dp_tab[i-1] + dp_tab[i-2] + dp_tab[i-3];
		}
	}

	return dp_tab[n];
}

int main(){
 

   int n;
   cin>>n;
   // int dp[n+1];

   // memset(dp , 0 , sizeof(dp));
 
   //cout << slove(n , dp);
   cout << tabulation(n);
	return 0;
}