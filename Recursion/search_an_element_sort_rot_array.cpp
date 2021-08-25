// question is search a particular terget value
// in sorted rotated array  [4,5,6,1,2] and terget is 2 

// sort array .. -- .. MEANS we apply binary search
// for reducing our time complexity from O(N) TO O(lonN)\\


#include <bits/stdc++.h>
using namespace std;



int slove(int a[] , int n , int t)
{
	int l = 0;
	int h = n-1;

	while(l<=h)
	{
		int m = (l+h)/2;
		if(a[m] == t){
			return mid;
		}	
        if(a[m] >= a[low])
        {
          if(a[low] <= t and a[m] => t)
          {
          	h = m-1;
          }else{
          	l = m +1;
          }
        }  
        else
        {
        	if(t >= a[m] and t <= a[h] )
        	{
        		l = m+1;
        	}else h = m-1;
        } 
       
	}
	return -1;
}



int main(){

int a[] = {3,4,5,6,7,10,1,2};

int n = sizeof(a)/sizeof(a[0]);

 slov(a , n);

	return 0;
}


