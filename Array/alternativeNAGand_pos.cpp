#include <bits/stdc++.h>
using namespace std;

// class Solution{
// public:
// 	void rearrange(int arr[], int n) {
// 	    vector<int> neg, pos;
// 	    for (int i = 0; i < n; i++) {

// 	        if (arr[i] < 0)
// 	            neg.push_back(arr[i]);
// 	        else
// 	            pos.push_back(arr[i]);
// 	    }

// 	    int i = 0, j = 0, k = 0;
// 	    while (i < neg.size() && j < pos.size()) {
// 	        arr[k++] = pos[j++];
// 	        arr[k++] = neg[i++];
// 	    }
// 	    while (j < pos.size()) { arr[k++] = pos[j++]; }

// 	    while (i < neg.size()) { arr[k++] = neg[i++]; }
// 	}
// };


// O(N) time complexity and O(N) space complexity



// --------------------------------------------//


   //NOW FIND A BATTER APPROACH


void rearrange(int a[] , int n)
{
   int j = -1;
   for (int i = 0; i < n; ++i)
   {
   	if(a[i] < 0)
   	{
     j++;
     swap(a[i] , a[j]);
   	}
   }

   int pos = j+1;
   int neg = 0;

   while(a[neg] < 0 and pos > neg and pos < n)
   {
     swap(a[neg] , a[pos]);
     neg+=2;
     pos+=1;
   }
}

int main(){

   
   int a[] = {1,2,3,-1,4,-3,6,9,-4};

   int n = sizeof(a)/sizeof(a[0]);

   rearrange(a , n);

   for(int i= 0 ;  i<n; i++)
   {
   	cout << a[i] << " ";
   }

	return 0;
}


