// given  a array find min in given quary

#include <bits/stdc++.h>
using namespace std;


int slove(int a[] , vector<int> &res , int l , int r , int n)
{
    int ans = INT_MAX;
	int len = sqrt(n);
	while(l <= r)
	{
		if(l%len == 0 and l+len-1 <= r)
		{
      ans = min(ans , res[l/len]);
      l+=len;
		}else
		{
			ans = min(ans , a[l]);
			l++;
		}
	}

	return ans;
}

vector<int> pc(int a[] , int n)
{  

	int len = (int)sqrt(n)+1;

	vector<int> res(len  , INT_MAX);

	for(int i =0 ; i< n ; i++)
	{
		int sqrtidx = i/len;

		res[sqrtidx] = min(res[sqrtidx] , a[i]); // if add then add a[i]
	}

	return res;
}

int main(){

   int a[] = {1,2,4,-1,6,-4,3,-2,10,-7,11,12};

   int n = sizeof(a)/sizeof(a[0]);

    vector<int> sq = pc(a , n);

    int l = 2;
    int r = 9;

    cout << slove(a , sq , l , r , n);
	return 0;
}