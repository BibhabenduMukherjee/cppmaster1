#include <bits/stdc++.h>
using namespace std;



vector<vector<int>> slove(vector<vector<int>> &v , int norow)
{
  for(int i = 0 ;i< norow ; i++)
  {
   v[i].resize(i+1);
   v[i][0] = v[i][i] = 1;

   for (int j = 1; j < i; j++)
   {
   	v[i][j] = v[i-1][j-1] + v[i-1][j] ;
   }
  }

  return v;
}


int main()
{

   int norow = 5;
   vector<vector<int>> = slove(v , 5);

   

	return 0;
}