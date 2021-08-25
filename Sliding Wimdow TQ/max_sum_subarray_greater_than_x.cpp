// given array of size n 
// find the min length of sub array which
// sum is greater than x 
// x is given in the question


#include <bits/stdc++.h>
using namespace std;

int Max_SUM_SUBARRAY(int arr[] , int n, int x)
{


	
  int sum = 0;int start = 0;   // start pointer of the array
	int end = 0;  // end pointer
	int minL = n+1;  


	while(end < n )
	{

	   while(sum <= x and end < n)
	   {
		sum+=arr[end++];
	   }

	while(sum > x and start < n)
	{
		if(end-start < minL)
		{
			minL = end-start
	    }
		sum-=arr[start++];
	}
}
return minL;



}
int main(){
	

    cout << Max_SUM_SUBARRAY(arr , n , x);
	return 0;
}