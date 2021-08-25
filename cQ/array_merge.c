#include <stdio.h>

int main()
{


  printf("ENTER FIRST ARRAYS ELEMENTS\n");

  int n,m;

  scanf("%d" , &n);
  scanf("%d" , &m);

  int a1[n];
  int a2[m];

  int a3[n+m];

  for (int i = 0; i < n; ++i)
   {
   	scanf("%d" , &a1[i]);
   } 

 for (int i = 0; i < m; ++i)
   {
   	scanf("%d" , &a2[i]);
   } 

int l = 0 ; int r =0 ;
int k = 0 ;
while(l < n and r < m)
{
  if(a1[l] > a2[r])
  {
     a3[k++] = a2[r];
     r++;
  }else
  {
  	a3[k++] = a1[l];
  	l++;
  }


}

while(l < n)
{
	a3[k++] = a1[l];
	l++;
}

while(r < m)
{
a3[k++] = a2[r];
r++;
}



for(int i = 0; i <n+m ;  i++){

printf("%d\t" , a3[i]);
}
	return 0;
}
