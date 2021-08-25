#include <bit/stdc++.h>
using namespace std;


// given a array elements
// find missing positive integer

// 9 12 4 1 2 -1 8

// 3 is missing that is first positive integers



// method -2 
// sort(a , a+n);                 o(nlogn)
// for(int i =0 ; i< n ; i++){ 

// 	if(a[i] > 0)
// 	{                                +
// 		if(a[i+1] != a[i]+1)
// 		{
//      return a[i]+1;
// 		}                           o(n)
// 	}
// }

int slove()
{ 

	        // mark elements which are out of range
///step 1	// manage presence of ones



	// step 3 find out missing integers


	bool one = false;



   for(int i = 0 ; i < n ; i++)
   {
   	if(a[i] == 1)
   	{
   		one = true;
   	}

   	if(a[i] < 1 || n < a[i])
   	{
   		a[i] = 1;
   	}
   }

  if(one == false)
  {
    return 1;
  }

	// step 2 map elements with index


    for(int  i= 0; i<n; i++)
    {
    	int index = abs(a[i]);
    	a[index -1] = - abs(a[index -1]);
    }

   for(int i =0 ; i<n ;i++)
   {
   	if(a[i] > 0){
   		return i+1;
   	}
   }
   return n+1;
}