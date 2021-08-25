// count the subset that's sum is divisible 
// by k
#include <bits/stdc++.h>
using namespace std;
int count_sub(int a[] , int n , int ind , int sum  , int k)
{
    int l ,r;
	if(ind == n)
	{
		if(sum%k == 0)
		{
			return 1;
	}else
	{
		return 0;
	}

	}
    
sum+=a[ind];
 l = count_sub(a,n , ind+1 , sum , k);
sum-=a[ind];

 r = count_sub(a , n, ind+1 , sum , k);

return (r+l);

}



int main(){

int a[] = {3,6};
int n = sizeof(a)/sizeof(a[0]);
int k = 3;
cout << count_sub(a ,n ,0 ,0, k);

return 0;
}

