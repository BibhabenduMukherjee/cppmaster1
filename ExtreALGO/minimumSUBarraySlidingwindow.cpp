#include <bits/stdc++.h>
using namespace std;

// Q -->> sliding window (find minimun subarray sum that greater than a number
//  X )

// appoach == >> 1. Use veriable ans,sum, start
//         == >> 2.iterate over array and start addind elemenst to sum
//         -- >> 3. if sum > X , remove elements from the start
//         TIME COMPLEXITY O(N)


int f(int arr[]  ,int n , int x){
	int sum = 0 ,  min = n+1; , start = 0 , end = 0;
	while(end < n){
		while(sum <= x  and end < n){
			sum+=arr[end++];

		} 

		while(sum > x and start<n){
			if(end-start  < min){
				min = end - start;

			}

			sum -= arr[start++];

		}
	}

	return min;
}

int main(){

	int arr[] = {1,4,45,6,10,19};
	int n = 6;
	cout << f(arr , n , x = 51);

	return 0;
}