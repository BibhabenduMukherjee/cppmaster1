#include <bits/stdc++.h>
using namespace std;


// create a dp[]   // each i'th element store min jumps needed to reach n

// tabulation -> meaning define done
//            -> space , direction (right to left)  n to n small problem


int slove()
{
	int dp[n+1];
	memset(dp , -1 , sizeof(dp));

	dp[n] = 0; // jumps needed to reach n to n;

	for (int i = n-1; i>=0; --i)
	{

		if(a[i] > 0){
        int min = INT_MAX;

		for (int j = 1; j <= a[i] and dp[i+j] <= n ; ++j)
		{
		if(dp[i+j] != -1)
		{
			dp[i]= min(min , dp[i+j]);
		}
		}

		if(min!= INT_MAX)
		{
			dp[i] = min+1;
		}

		}
		
	}
} 

int main(){
   

    
	return 0;
}