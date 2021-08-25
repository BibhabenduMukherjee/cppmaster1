#include <bits/stdc++.h>
using namespace std;


void f(int a[] , int n , int k)
{
	int mod = k%n;

	for(int i =0; i<n; i++)
	{
		cout << (a[(mod + i )%n]) << " ";
	}
}

int main(){


   int a[] = {1,2,3,4,5,6,7};
   int n =sizeof(a)/sizeof(a[0]);
   int k = 3;
   f(a, n, k);

	return 0;
}