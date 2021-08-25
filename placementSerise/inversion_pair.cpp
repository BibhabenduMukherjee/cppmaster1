#include <bits/stdc++.h>
using namespace std;


int merge()
{
	int i ,j ,k;

	int in_c =0;
	i = low;
	j = mid;
	k = low;

	while((i <= mid-1) and (j<=high))
	{
        if(a[i] <= a[j])
        {
          temp[k++] = a[i++];
        }else
        {
        	temp[k++] = a[j++];
        	in_c = in_c + (mid-i);
        }
	}

	while(i<=mid-1)
	{
      temp[k++] = a[i++];
	}

	while(j<=high)
	{
		temp[k++]=a[j++];
	}


	for (int i = low; i <= high; ++i)
	{
		a[i] = temp[i];
	}

}



int _mersort(int a[] ,int temp[] , int l , int h )
{
  
   int inv = 0;
   if(h>l)
   {
    int m = (l+h)/2;
    inv+= _mersort(a ,temp, l ,m);
    inv+= _mersort(a,temp,m+1,h);

    inv+= merge(a , temp,l ,m ,h);

   }

   return inv;
}

int main(){

   int a[] = {2,5,4,3,1};
   int n = 5;
   int temp[n];
   cout << _mersort(a , temp,0, n-1);

	return 0;
}