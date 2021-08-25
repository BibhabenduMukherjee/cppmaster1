#include<bits/stdc++.h>
using namespace std;


/// heapSort implementation using min heap
// random array is given to you 
// build a min heap form it and 



void hepify(int arr[] , int n , int i)
{
	int smallest = i;

	int l = 2*i +1;
	int r= 2*i+2;

	if( l < n and arr[smallest] > arr[l])
	{
		smallest = l;
	}
	if(r < n and aarr[smallest] > arr[r])
	{
		smallest = r;
	}

	if(i!=smallest)
	{
		swap(arr[i] , arr[smallest]);
		hepify(arr , n , smallest);
	}
}

void heapSort(int arr[] , int n)
{

	// build heap form last non leaf node or the parent node 

	for(int i = n/2 -1;  i >= 0 ; i--)
	{
       hepify(arr , i , n);
	}

	for (int i = n-1; i >0; ++i)
	{
		swap(arr[0] , arr[i]);
		hefify(arr , i , 0);
	}

}



int main(){

	int arr [] = {10,15 , 3,2,1};

	int n = sizeof(arr)/sizeof(arr[0]);

	heapSort(arr , n);
	return 0;
} 