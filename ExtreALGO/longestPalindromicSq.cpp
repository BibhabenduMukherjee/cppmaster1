#include <bits/stdc++.h> 
using namespace std;

int dp[1001][1001];
int slove(string s , int i , int j){
   
   if(i==j) return 1;
   if(i>j) return 0;
   if(dp[i][j]!=-1) return dp[i][j];
   if(s[i] == s[j]) return dp[i][j] = slove(s,i+1 , j-1) +2;
   else{
   	return dp[i][j] = max(slove(s, i+1 , j) , slove(s , i, j-1));
   }

}
int main(){
   int n;
   cin >>n;
   string s;
   cin >> s;
   memset(dp , -1 , sizeof(dp));
   cout << slove(s,0,n-1);

	return 0;
}