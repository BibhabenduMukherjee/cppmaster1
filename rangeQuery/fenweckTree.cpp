#include <bits/stdc++.h>
using namespace std;

// precalculation for fenwick array is done in O(n) complexity


void preCalCulation(vector<int> &fenwick , vector<int> &preCal , int n)
{
     for(int i = 1 ; i < n; i++)
     {
     	int id =  i - (i&-i);

      fenwick[i] = preCal[i] - preCal[id];
     }
}

int main(){

   int n;
   cin >> n;

   vector<int> input(n+1);

   for(int i = 1 ; i<n+1; i++){
   	cin >> input[i];
   }

   vector<int> preCal(n+1,0);

   for(int i =1 ; i < n+1; i++)
   {
   	preCal[i] = preCal[i-1] + input[i];
   }


    vector<int> fenwick(n+1 , 0);
   preCalCulation(fenwick , preCal);
	return 0;
}