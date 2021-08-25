#include <bits/stdc++.h>
using namespace std;


int minDistance(string s1 , string s2 , int n , int m , vector<vector<int>> &dp){
  
  
  

  // number one base case
  
	if(n==0) return m;
	if(m==0) return n;
 // 
  
   if(dp[n][m] != -1)  	return dp[n][m];

   if (s1[n-1] == s2[m-1])
   {
     if(dp[n-1][m-1] != -1){return dp[n][m] = dp[n-1][m-1];}

   else{
      return dp[n][m] = minDistance(s1,s2,n-1,m-1,dp);
   }
}else{

	int m1,m2,m3;
     if(dp[n-1][m]!=-1){   
      m1 = dp[n-1][m];     
    }          
    else{  
      m1 = minDistance(s1, s2, n-1, m, dp);     
    }           
             
    if(dp[n][m-1]!=-1){               
      m2 = dp[n][m-1];           
    }           
    else{   
      m2 = minDistance(s1, s2, n, m-1, dp);     
    }  
     if(dp[n-1][m-1]!=-1){   
      m3 = dp[n-1][m-1];     
    }  
    else{  
      m3 = minDistance(s1, s2, n-1, m-1, dp);      
    }  

      return dp[n][m] = 1+min(m1 , min(m2,m3));                

}
  
   


}

int main(){

 string s1 = "satarday";
 string s2 = "sunday";

 int n = s1.length();
 int m = s2.length();
 vector<vector<int>> dp(n+1 , vector<int>(m+1 , -1));

 cout << minDistance(s1,s2,n,m , dp);

}
  