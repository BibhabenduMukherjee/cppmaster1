

// given a array you try to build a BT from this sQ
// L.C = 2*i+1   and R.C = 2*i+2
// then build a max heap
// choose the last no-leaf node and apply hepify if required  after building max heap then convert is into sorted array

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>


// define the hefipy function

void hefify(vi &a , int n , int i){
	int maxId = i;
	int l = 2*i+1;
	int r = 2*i+2;

	if(l<n and a[l]>a[maxId]){
		maxId= l;
	}

	else if(r < n and a[r]  > a[maxId]){
		maxId = r;
	}

	if(maxId!=i){
       swap(a[i] , a[maxId]);

       // call hepify again

       hefify(a , n  maxId);
	}
}

void heapSort(vi &a , int n){
	// build max-heap

	// start a loop from last non-leaf node to 0

	for (int i = n/2-1; i >=0; --i)
	{
		hepify(a, n , i);
	}
  // for swapping process first node and last node
	for (int i = n-1; i>0 ; --i)
	{
		swap(a[0] , a[i]);
		// call hepify down //
		hefify(a, i,0);
	}
}

int main(int argc, char const *argv[])
{
	int n ;  cin>> n;
	vi a(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	heapSort(a , n);


	return 0;
}