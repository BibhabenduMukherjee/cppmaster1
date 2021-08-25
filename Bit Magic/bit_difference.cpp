

#include <bits/stdc++.h>
using namespace std;



long long sumBitDifferences(int a[] , int n)
{
    long long res =0 ;
	long long counton=0;
	for(int i =0 ;i <32; i++)
	{
      for (int j = 0; j < n; ++j)
      {
      	if(((a[j])&(1<<i))){
          counton++;
      	}
      }

     long long countoff = n-counton;
     long long diff = counton*countoff*2;

     res+= diff;
	}

	return res;
}


int main()
{
    int arr[] = { 1, 3, 5 };
    int n = sizeof arr / sizeof arr[0];
    cout << sumBitDifferences(arr, n) << endl;
    return 0;
}

