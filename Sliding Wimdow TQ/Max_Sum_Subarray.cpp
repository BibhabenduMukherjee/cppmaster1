// given a array 
// given a sum x
// given a window of size k
// find a sum that is less than x but greater in 
// all the sum of 3 elements


#include <bits/stdc++.h>
using namespace std;

 void maxSumSubarry(int arr[] , int n , int  , int x){

  int sum = 0;  int ans = 0; 

  for(int i =0 ; i < k ; i++){

  	sum += arr[i];
  }


if (sum < x)
{
	ans = sum;

}


for (int i = k; i <n; ++i)
{
	sum = sum - arr[i-k];
	sum += arr[i];
	if(sum < x){
		ans = max(sum , ans);
	}
}
   cout << ans << "  ";
 }

int main(){

   int arr[] = {7 ,5 ,4 ,6 , 8 ,9};
   int n = 6;
   int k = 3;
   int x = 20;

   maxSumSubarry(arr , n , k , x);
 
	return 0;
}


