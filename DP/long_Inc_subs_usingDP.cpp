
// memoization is used for top-bottom approach
//



#include <bits/stdc++.h>
using namespace std;

const int N = 10001;
int dp[N];


int lis(vector<int> &a , int n){

	if(dp[n] != -1){
		return dp[n];
	}
   dp[n] = 1;
	for (int i = 1; i <= n; ++i)
	{
		if(a[n] > a[i])
		{
			dp[n] = max(dp[n] , 1+lis(a , i));
		}
	}

	return dp[n];  // store final ans of every call
}


int main(int argc, char const *argv[])
{
	for (int i = 0; i < N; ++i)
	{
		dp[i] = -1;  
	}

	int n;
	cin >> n;
	vector<int>a(n);

	for (int i = 1; i <= n; ++i)
	{
	cin >> a[i];
	}

	cout << lis(a , n);
	return 0;
}


/////////////////////////////////////////////////////


int dp[n];

int f(int arr[]){
	int overal = 0;
	

	for (int i = 0; i <n; ++i)
	{
		int max = 0;
	  for (int j = 0; j<i; ++j)
	  {
	  	if(arr[j] < arr[i]){
	  		if(max<dp[j]) max = dp[j];
	  	}
	  }

	 dp[i] = max+1; // till i lis 

	  if (overal<dp[i])
	  {
	  	overal = dp[i];
	  }
	}
}