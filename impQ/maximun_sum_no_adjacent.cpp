#include <bits/stdc++.h>
using namespace std;


void slove(int a[] , int n)
{
	int inc = a[0];
	int excl = 0;

	int excl_new;

	for(int i = 1 ; i<n ; i++)
	{
		excl_new = (inc > excl) ? inc : excl;

		inc = excl + a[i];
		excl = excl_new;
	}
return ((inc > excl) ? inc : excl);

}

int main(){

  int a[] = {5,5,10,100,10,5};

  int n = sizeof(a)/sizeof(a[0]);

  slove(a , n);
	return 0;
}