#include <bits/stdc++.h>
using namespace std;

int minSubSetPrd(int arr[]  , int n){
    int max_neg = INT_MIN;
	int min_pos = INT_MAX;
	int zC = 0; int prd = 1;
	int neg_count = 0;
   if(n==1){return arr[0];}

	for (int i = 0; i < n; ++i)
	{
	    if(arr[i] <0){
	       max_neg = max(max_neg , arr[i]);
	       neg_count++;
	    }
	    if (arr[i] == 0)
	    {
	    	zC ++ ;
	    	continue;
	    }

	    if(arr[i]>0){
	    	min_pos = min(min_pos , arr[i]);
	    }
	    prd = prd * arr[i];
	}
     if(zC == n || zC > 0) return 0;
     if(!(neg_count &1) and neg_count !=0) {prd = prd / max_neg;}
	

	return prd;
}
int main(){



    int arr[] = {1,3,-1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << minSubSetPrd(arr , n);
	return 0;



}