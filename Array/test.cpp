#include <bits/stdc++.h>
using namespace std;

	const int n = 10;

	int a[n+1];

	void f()
	{
		for(int i =0 ; i< n ;i++)
		{
			cin >> a[i];
		}
	}

int main()
{
	f();
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] <<" ";
	}
}