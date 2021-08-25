// also known as 
// maximun subarray sum
//  subarray should have contiguous



#include <bits/stdc++.h>
using namespace std;


int slove(int a[] , int n)
{
	int sum = 0 ;
	int count_far = 0;

	for (int i = 0; i < n; ++i)
	{
		sum+=a[i];

		if(sum > count_far){
          count_far = sum;
      
		}

		if(sum <0)
		{
         sum =0;
		}
	}

	return count_far;
} 

int main()
{


  int a[] ={-2,1,-3,4,-1,2,1,-5,4};

  int n = sizeof(a)/sizeof(a[0]);

  cout << slove(a , n);
	return 0;
}