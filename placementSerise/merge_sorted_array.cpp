#include <bits/stdc++.h>
using namespace std;

int next_gap(int gap){
	if(gap <=1) return 0;

	return (gap/2) + (gap%2);
}

void merge(int a1[] , int a2[] , int n , int m)
{
	int i,j; int gap = n+m;

	for(gap=next_gap(gap) ; gap >0; gap=next_gap(gap))
	{
       // first array

		for(i = 0 ; i+gap < n; i++){
          if(a1[i] > a1[i+gap])
          {
              swap(a1[i] , a1[i+gap]);
          }
		}

      // second array


		for(j = gap > n ? gap-n : 0; j<m and i<n ; i++; j++)
		{
          if(a1[i] > a2[j])
          {
              swap(a1[i] , a2[j]);
          }
		}


		if(j<m)
		{
          for(j =0; j+gap < m; j++)
          {
          	if(a2[j] > a2[j+gap])
          	{
          		swap(a2[j] , a2[j+gap]);
          	}
          }
		}

	}
}



int main()
{
  int a1[] = { 10, 27, 38, 43, 82 };
    int a2[] = { 3, 9 };
    int n = sizeof(a1) / sizeof(int);
    int m = sizeof(a2) / sizeof(int);
 
    // Function Call
    merge(a1, a2, n, m);
 
    printf("First Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a1[i]);
 
    printf("\nSecond Array: ");
    for (int i = 0; i < m; i++)
        printf("%d ", a2[i]);
    printf("\n");
    

	return 0;
}