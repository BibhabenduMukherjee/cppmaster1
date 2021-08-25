// create a look up table

#include <bits/stdc++.h>
using namespace std;

#define MAXN 100001


int s[MAXN];

void sieve()
{
  for (int i = 2; i < MAXN; i++)
  {
  	s[i] = i;
  }

  for (int i = 4; i < MAXN; i+=2)
  {
  	s[i] =2;
  }


  for (int i = 3; i*i <=MAXN ; ++i)
  {
  	if(s[i] == i)
  	{
     for (int j = i*i; j<MAXN; j+=i)
     {
     	if(s[j] == j){s[j] = i;}
     }
  	}
  }

}


vector <int> slove(int k)
{
   vector <int> r;

   while(k!=1)
   {
   	r.push_back(s[k]);
   	k = k / s[k];
   }
   return r;
}


int main()
{

	sieve();

   int k = 12246;   
   vector <int> res = slove(k);

   for(int i =0; i<res.size() ; i++)
   {
   	cout << res[i] << " " ;
   }cout << endl;

	return 0;
}