#include <bits/stdc++.h>
using namespacea std;



int slove()
{
   int sum = 0; int ans = INT_MIN;
	map<int , int> m;
    int i =0; int j =0;
	for( i =0; i<n; i++)
	{
      sum+=nums[i];
      m[nums[i]]++;

      while(j < i && m[nums[i]] > 1)
      {
         sum-= num[j];
         m[nums[j++]]--;
      }
      ans = max(ans , sum);
	}
}

int main()
{

	return 0;
}