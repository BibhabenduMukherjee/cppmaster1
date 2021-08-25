#include<bits/stdc++.h>

using namespace std;



void slove(int a[] , int n)
{
  map<int , int> m;

  for (int i = 0; i < n; ++i)
  {
  	m[a[i]]++;

  }

  for(auto i : m)
  {
  	if(i.second > 1)
  	{
     cout << i.first << " ";
  	}
  }
}

int main(){
   
  int a[] = {5, 40, 1, 40, 100000, 1, 5, 1};

  int n = sizeof(a)/sizeof(a[0]);
  slove(a, n);
	return 0;
}