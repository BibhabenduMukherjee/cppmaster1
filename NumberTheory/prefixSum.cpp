#include <bits/stdc++.h>
using namespace std;


void slove(int a[]  , int n , int l , int r)
{



	int res[n+1];
    res[0] = a[0];
	for(int i = 1 ; i<n ; i++)
	{
      res[i] = res[i-1] + a[i]; 
	}
    
    int ans;
    if(l == 0)
    {
    ans = res[r];
    }else{
    	 ans = res[r] - res[l-1];
    }
	
 
     

	cout << ans ;
}

int main()
{

    int a[] = {2,4,6,8,2,5,3};

    int n = sizeof(a)/sizeof(a[0]);


    slove(a , n , 1, 5);

	return 0;
}