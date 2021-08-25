
// given to stirng s1 and s2
// find common subs squence between them 
// this is the solution by memoization


#include <bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int , int >

using namespace std;
const int N = 10001;

int dp[N];
int lcs(string &s1 , string &s2 , int n , int m){
   if(n==0  || m==0)
       {
   	 return 0;
   	   }
    if(dp[n][m]!= -1) return dp[n][m];
    if(s1[n-1]== s2[m-1]){
    	dp[n][m] = 1+lcs(s1,s2 , n-1 , m-1);
    }else{
    	dp[n][m] = max(lcs(s1,s2 , n , m-1) , lcs(s1, s2 , n-1,m));
    }
  return dp[n][m];
}

int main(int argc, char const *argv[])
{

	for (int i = 0; i < N; ++i)
	{
	   dp[i] = -1;
	}
	string s1 = "Rishab";
	string s2 = "Bishab";

	int n = s1.length();
	int m = s2.length();

	cout << lcs(s1,s2,n,m);
	return 0;
}