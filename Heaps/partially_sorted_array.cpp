// given array in this array every elements
//  is k distance away from it's sorted position





#include <bits/stdc++.h>
using namespace std;

void sortPartial(int a[] , int n  int k)
{
	priority_queue<int , vector<int> , greater<int>> pq;  // min heap               

	for(int i =0; i<=k ; i++)
	{
       pq.push(a[i]);
	}

	int ind =0;

	for(int i = k+1; i<n; i++)
	{
		a[ind] = pq.top();
		pq.pop();
		ind++;
		pq.push(a[i]);
	}
}

int main()
{

}