#include <bits/stdc++.h>
using namespace std;



int bitonic(int *arr , int low , int high){

	// if there are only one element in the array

	if(low == high) return arr[low];

	// if there are two two elements in the array
	// arr[low] > arr[high] return arr[low];
	// else
	// return arr[hihg]

	    if ((high == low + 1) && arr[low] >= arr[high]) return arr[low];


	    if ((high == low + 1) && arr[low] < arr[high]) return arr[high];
         int mid = (low + high) /2;
     if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) return arr[mid];

     if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
	        return findMaximumUtil(arr, low, mid - 1);
   
    else
	        return findMaximumUtil(arr, mid + 1, high);


}



int f(int arr[] , int n){

  return bitonic(arr , 0 , n);
}

itn main(int argc, char const *argv[])
{
	int arr[] = {1,15,25,45,42,21,17,12,11};
	int n = sizeof(arr)/sizeof(arr[0]);

	f(arr , n);
	return 0;
}