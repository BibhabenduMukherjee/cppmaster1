#include <bits/stdc++.h>
using namespace std;


void slove(int pre[] , int n)
{

	int pivot = 0;
	for(int i =1 ; i<n; i++)
	{
		if(pre[0] <= pre[i]){

			pivot = i;
			break;

		}


	}

	for(int i = pivot-1 ; i>0 ; i--)
	{
		cout << pre[i] <<" ";
	}

	for(int i = n-1 ; i>= pivot ; i--)
	{
		cout << pre[i] <<" ";
	}

	cout << pre[0];
}



int main()
{
   

   int pre[] = {40 , 30 , 32 , 35 , 80 , 90 , 100};
   int n = sizeof(pre)/sizeof(pre[0]);

   slove(pre, n);
   
	return 0;
}