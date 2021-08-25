#include <bits/stdc++.h>
using namespace std;


int find_maximum(int a[] , int n ,int K)
{

  map<int , int> m;

  for(int i =0 ;i<n ;i++)
  {
  	int x = a[i];

  	int d = min(i+1 , n-i);

   if(m.find(x) == m.end()){
  	   m[x] = d;
   }

   else
   	 b[x] = min(d , b[x]);
  }



  int ans = INT_MAX;

  for(int i =0 ; i<n ; i++)
  {
  	int x = a[i];

  	if(x != K-x   and m.find(k-x) != m.end())
  	{
  		ans = min(max(m[x] , m[K-x]) , ans);
  	}
  }
return ans;
}

int main()
{

int a[] = { 3, 5, 8, 6, 7 };
    int K = 11;
    int n = sizeof(a) / sizeof(a[0]);
    cout << find_maximum(a, n, K) << endl;
    return 0;

	return 0;
}