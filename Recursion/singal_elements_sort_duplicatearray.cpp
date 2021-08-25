// find a element that present only one time 
// sorted duplicate array
// ex:-> [1,1,2,3,3 ,4,4,5,5]
	// ans is 2 {index}


// even index 1'st instance // odd index 2nd instance 

// this is  for the left half


// even index 2nd instance // odd index 1' st instance 

// this is for the right half





#include <bits/stdc++.h>
using namespace std;


int slove(int a[] , int n)
{
	int low = 0;
	int high = n-2;

	while(high>=low)
	{
		int mid = (low+high)/2;

		//check is it left half or not if not set high in mid-1

		if(a[mid] == a[mid^1])
		{
			low = mid+1;  
		}else{
			high = mid-1;
		}



		}

  return a[low];
}

int main(){

   int a[] = {1,1,2,2,3,3,4,4,5,5,6};
   
   int n = sizeof(a)/sizeof(a[0]);

   cout <<"The only element is : " << slove(a , n);
	return 0;
}